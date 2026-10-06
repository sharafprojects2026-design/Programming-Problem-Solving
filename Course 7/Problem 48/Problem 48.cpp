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

vector <string> SplitString(string S1, string Delim)
{
	vector <string> vString;
	string Wword;
	
	int Pos = 0; 

	while ((Pos = S1.find(Delim)) != std::string::npos)
	{
		Wword =S1.substr(0, Pos);
		if (Wword != "")
		{
			vString.push_back(Wword);

		}
		S1.erase(0, Pos + Delim.length());
	}
	if (S1 != "")
	{
		vString.push_back(S1);
	}
	return vString;
}

sClient ConvertLineToRecord(string Line,string Seperator = "//#//")
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

void PrintClientRecord(sClient Client)
{
	cout << "| " << setw(15) << left << Client.AccountNumber;
	cout << "| " << setw(10) << left << Client.PinCode;
	cout << "| " << setw(40) << left << Client.Name;
	cout << "| " << setw(13) << left << Client.Phone;
	cout << "| " << setw(15) << left << Client.AccountBalance;

}

void PrintAllClientsData(vector <sClient> vClients)
{
	cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ")Client(s).";
	cout << "\n\n___________________________________________________________________";
		cout <<"____________________________________________________\n\n";
	
	cout << "| " << left << setw(15) << "Accout Number";
	cout << "| " << left << setw(10) << "Pin Code";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Phone";
	cout << "| " << left << setw(12) << "Balance";
	cout <<"\n___________________________________________________________";
	cout << "_____________________________________________________________\n" << endl;
	for (sClient Client : vClients)
	{
		PrintClientRecord(Client);
		cout << endl;
	}
	cout <<
		"\n_____________________________________________________________";
	cout << "__________________________________________________________\n" << endl;
}

int main()
{
	vector <sClient> Client = LoadClientsFromFile(ClientsFileName);
	PrintAllClientsData(Client);
	
	return 0;
}
