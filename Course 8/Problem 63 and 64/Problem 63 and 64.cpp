#include <iostream>
#include <vector>
#include <string>
using namespace std; 


struct stDate
{
	short Year;
	short Month;
	short Day;
};
vector<string> SplitString(string S1, string Delim)
{
	vector<string> vString;
	short pos = 0;
	string sWord; // define a string variable
	// use find() function to get the position of the delimiters
	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}
	if (S1 != "")
	{
		vString.push_back(S1); // it adds last word of the string.
	}
	return vString;
}

string ReadDateString(string Message)
{
	string Datestring = "";

	cout << Message;
	getline(cin >> ws, Datestring);
	return Datestring;
}
stDate stringToDateStructure(string stringDate)
{
	stDate Date;
	vector <string> VDate;

	VDate = SplitString(stringDate, "/");
	
	Date.Day = stoi(VDate[0]);
	Date.Month = stoi(VDate[1]);
	Date.Year = stoi(VDate[2]);

	return Date;
}

string DateToString(stDate Date)
{
	return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);
}

int main()
{
	string DateString = ReadDateString("Please Enter Date dd/mm/yyy? ");
	stDate Date = stringToDateStructure(DateString);
	cout << "\n\nDay:" << Date.Day << endl;
	cout << "Month:" << Date.Month << endl;
	cout << "Year:" << Date.Year << endl;

	cout << "\nYou Entered: " << DateToString(Date);



}

