#include <iostream>
#include <string>
#include <cctype>
using namespace std;
struct sClient
{
	string AcountNumber = "";
	int PinCode;
	string Name;
	long Phone;
	long AccountBalance;
};

sClient ReadNewClient()
{
	sClient Client;
	
	
	cout << "Enter Account Number? ";
	getline(cin, Client.AcountNumber);
	cout << "Enter PinCode? ";
	cin >> Client.PinCode;
	cin.ignore();
	cout << "Enter Name? ";
	getline(cin, Client.Name);

	cout << "Enter Phone? ";
	cin >> Client.Phone;

	cout << "Enter AccountBalance? ";
	cin >> Client.AccountBalance;
	return Client;
	
	

}



	string ConvertToRecordToLine(sClient Client, string separator = "#//#")
	{
		string Record = "";

		Record += Client.AcountNumber + separator;
		Record += to_string(Client.PinCode) + separator;
		Record += Client.Name + separator;
		Record += to_string(Client.Phone) + separator;
		Record += to_string(Client.AccountBalance);

		return Record;
	}


int main()
{
	sClient Client; 
	cout << "Please enter Client Data: \n\n";
	
	Client = ReadNewClient();

	cout << "\n\n\n Clint Record for Saving is:\n";

	cout << ConvertToRecordToLine(Client);
	

}