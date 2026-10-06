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
};

string ReadAccountNumber()
{
	string AccountNumber;
	cout << "Please enter Account Number? ";
	cin >> AccountNumber;
	return AccountNumber;
}
vector <string> SplitString(string S1, string Delim)
{
	vector <string> vString;
	string Word;

	int Pos = 0;

	while ((Pos = S1.find(Delim)) != std::string::npos)
	{
		Word = S1.substr(0, Pos);

		if (Word != "")
		{
			vString.push_back(Word);
		}

		S1.erase(0, Pos + Delim.length());
	}

	if (S1 != "")
	{
		vString.push_back(S1);
	}

	return vString;
}

sClient ConvertLineToRecord(string Line, string Seperator = "//#//")
{
	vector <string> vClient;
	sClient Client;
	vClient = SplitString(Line, Seperator);

	Client.AccountNumber = vClient[0];
	Client.PinCode = vClient[1];
	Client.Name = vClient[2];
	Client.Phone = vClient[3];
	Client.AccountBalance = stod(vClient[4]);

	return Client;

}
vector <sClient> LoadClientsFromFile(string FileName)
{
	vector <sClient> vString;
	string Line;
	fstream MyFile;
	sClient Client;

	MyFile.open(FileName, ios::in);

	if (MyFile.is_open())
	{
		while (getline(MyFile, Line))
		{
			Client = ConvertLineToRecord(Line);

			vString.push_back(Client);

		}
		MyFile.close();
	}
	return vString;

}

bool FindAccountNumber( string AccountNumber, sClient& Client)
{
	vector<sClient> vClient = LoadClientsFromFile(ClientsFileName);
	for (sClient C : vClient)
	{
		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}
	}
	return false;
}

void PrintClient(sClient stClient)
{
	cout << "\n\nThe Following are The Client Details:\n\n";
	cout << "Account Number : " << stClient.AccountNumber << endl;
	cout << "Pin Code       : " << stClient.PinCode << endl;
	cout << "Name           : " << stClient.Name << endl;
	cout << "Phone          : " << stClient.Phone << endl;
	cout << "Account Balance: " << stClient.AccountBalance << endl;
}

int main()
{
	sClient Client;
	
	string AccountNumber = ReadAccountNumber();

	if (FindAccountNumber(AccountNumber,Client))
	{
		PrintClient(Client);
		
		cout << endl;
	}
	else
	{
		cout << "\nClient With Account Number (" << AccountNumber << ") Not Found.!\n\n";
	}
	


	return 0;
}
