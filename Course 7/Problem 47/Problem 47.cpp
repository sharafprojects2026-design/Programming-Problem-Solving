#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype>
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

sClient ReadClient()
{
	sClient Client_Data;
	cout << "\nEnter Account Number?";
	getline(cin >> ws, Client_Data.AccountNumber);
	cout << "Enter Pin Code     ?";
	getline(cin, Client_Data.PinCode);
	cout << "Enter Name Client? ";
	getline(cin, Client_Data.Name);
	cout << "Enter Phone? ";
	getline(cin, Client_Data.Phone);
	cout << "Enter Account Balance? ";
	cin >> Client_Data.AccountBalance;

	return Client_Data;

}

string ConverRecordFileToLin(sClient Data_Clent,string Seperator="//#//")
{
	
	string stClientRecord = "";
	stClientRecord += Data_Clent.AccountNumber  + Seperator;
	stClientRecord  +=Data_Clent.PinCode + Seperator;
	stClientRecord +=Data_Clent.Name + Seperator;
	stClientRecord += Data_Clent.Phone + Seperator;
	stClientRecord += to_string(Data_Clent.AccountBalance);

	return stClientRecord;


	
}

void AddDatalineToFile(string FileName, string line)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out | ios::app);
	if (MyFile.is_open())
	{
		MyFile << line << endl;
		MyFile.close();
	}
}
void AddNewData()
{
	sClient Client;
	Client =ReadClient();
	AddDatalineToFile(ClientsFileName, ConverRecordFileToLin(Client));

}


void AddClients()
{
	char AddMore = 'Y';

	do
	{
		system("cls");
		cout << "Adding New Client";
		AddNewData();
		cout << "\nClient Added Successuflly,do You Want to Add More Client?\n";
		cin >> AddMore;
	} while (toupper(AddMore) == 'Y');
}

int main()
{
	AddClients();
	
	
	return 0;
}
