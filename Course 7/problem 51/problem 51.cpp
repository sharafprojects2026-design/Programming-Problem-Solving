#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype>
#include <iomanip>
using namespace std;


const string ClientsFileName = "Client.txt";
struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
	bool MarkForDelete = false;
	
	
};

string ReadAccountNumber()
{
	string AccountNumber;
	cout << "Please enter Account Number? ";
	cin >> AccountNumber;
	return AccountNumber;
}

void PrintClientCard(sClient stClient)
{
	cout << "\n\nThe Following are The Client Details:\n\n";
	cout << "Account Number : " << stClient.AccountNumber << endl;
	cout << "Pin Code       : " << stClient.PinCode << endl;
	cout << "Name           : " << stClient.Name << endl;
	cout << "Phone          : " << stClient.Phone << endl;
	cout << "Account Balance: " << stClient.AccountBalance << endl;
}

vector <string> SplitString(string S1, string Dilem)
{
	vector <string> vString;

	string Word;
	int Pos = 0;

	while ((Pos = S1.find(Dilem)) != std::string::npos)
	{
		Word = S1.substr(0, Pos);
		if (Word != "")
		{
			vString.push_back(Word);
		}
		S1.erase(0, Pos + Dilem.length());
	}

	if (S1 != "")
	{
		vString.push_back(S1);
	}
	return vString;
}
sClient ConvertlineToRecord(string line, string Seperator = "#//#")
{
	sClient Client;
	vector <string> vClient;
	vClient = SplitString(line, Seperator);
	if (vClient.size() < 5)
	{
		return Client;
	}
	Client.AccountNumber = vClient[0];
	Client.PinCode = vClient[1];
	Client.Name = vClient[2];
	Client.Phone = vClient[3];
	Client.AccountBalance = stod(vClient[4]);

	return Client;

}

string ConvertRecordtoLine(sClient Client, string Seperator = "#//#")
{
	string StringLines = "";
	StringLines += Client.AccountNumber + Seperator;
	StringLines += Client.PinCode + Seperator;
	StringLines += Client.Name + Seperator;
	StringLines += Client.Phone + Seperator;
	StringLines +=to_string(Client.AccountBalance);

	return StringLines;
}

vector <sClient> LoadClientToVectortoFile(string FileName)
{
	sClient Client;
	vector <sClient> vString;
	fstream MyFile;
	string line;
	MyFile.open(FileName, ios::in);

	if (MyFile.is_open())
	{
		while (getline(MyFile, line))
		{
			Client = ConvertlineToRecord(line);
			vString.push_back(Client);
		}
		MyFile.close();
	}
	return vString;

}

vector<sClient> SaveClientDataToFile(string FileName, vector <sClient>vClient)
{

	fstream MyFile;
	string DataLine;
	MyFile.open(FileName, ios::out );
	if (MyFile.is_open())
	{

		for (sClient& C : vClient)
		{
			if (C.MarkForDelete== false)
			{ 
				DataLine = ConvertRecordtoLine(C);
				MyFile << DataLine << endl;
			
			}
				
			
		}
		MyFile.close();

	}
	return vClient;

}

bool FindClientByAccountNumber(string AccountNumber, vector<sClient>& vString, sClient& Client)
{

	for (sClient& C : vString)
	{
		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}

	}
	return false;
}



sClient ChangClientRecord(string AccountNumber)
{

	sClient Client;
	Client.AccountNumber = AccountNumber;
	cout << "Enter Pin Cod: ";
	cin >> Client.PinCode;
	cout << "Enter Name: ";
	getline(cin >> ws, Client.Name);
	cout << "Enter Phone: ";
	cin >> Client.Phone;
	cout << "Enter Account Balance: ";
	cin >> Client.AccountBalance;

	return  Client;
	
}

bool UpdateClientByAccountNumber(string AccountNumber, vector<sClient>& vClient)
{
	sClient Client;
	char Answer = 'n';

	if (FindClientByAccountNumber(AccountNumber, vClient, Client))
	{
		PrintClientCard(Client);
		cout << "\n\n Are You sure you Want Update this Client y/n? ";
		cin >> Answer;
		if (Answer == 'y' || Answer == 'Y')
		{

			for (sClient& C : vClient)
			{
				if (C.AccountNumber == AccountNumber)
				{
					C = ChangClientRecord(AccountNumber);
					break;
				}
				
			}
			
			 SaveClientDataToFile(ClientsFileName,vClient);

			cout << "\n\nClient Update Successfuly.\n";
			return true;

		}

	}
	else
	{
		cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
		return false;
	}
	

}

int main()
{

	vector  < sClient> vClient = LoadClientToVectortoFile(ClientsFileName);
	string AccountNumber = ReadAccountNumber();
	UpdateClientByAccountNumber(AccountNumber, vClient);
	
	system("pause>0");

	return 0;
}
