#include <iostream>
#include <string>
#include <vector>

using namespace std;
string  ReplaceWordInString(string S1, string StringToReplace,string sRepalceTo)
{
    short pos = S1.find(StringToReplace);
    while (pos != std::string::npos)
    {
        S1 = S1.replace(pos, StringToReplace.length(),sRepalceTo);
        pos = S1.find(StringToReplace);//find next
    }
    return S1;
}

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
        S1.erase(0, pos + Delim.length()); /* erase() until
        positon and move to next word. */
    }
    if (S1 != "")
    {
        vString.push_back(S1); // it adds last word of the string.
    }
    return vString;
}

string DateToString(stDate Date)
{
    return to_string(Date.Day) + "/" + to_string(Date.Month) +
        "/" + to_string(Date.Year);
}
stDate StringToDate(string DateString)
{
    stDate Date;
    vector <string> vDate;
    vDate = SplitString(DateString, "/");
    Date.Day = stoi(vDate[0]);
    Date.Month = stoi(vDate[1]);
    Date.Year = stoi(vDate[2]);
    return Date;
}

string ReadStringDate(string Message)
{
    string DateString;
    cout << Message;
    getline(cin >> ws, DateString);
    return DateString;
}

string FormatToDate(stDate Date, string DateFormat = "dd/mm/yyy")
{
    string FormatDateString = "";

    FormatDateString = ReplaceWordInString(DateFormat, "dd", to_string(Date.Day));
    FormatDateString = ReplaceWordInString(FormatDateString, "mm", to_string(Date.Month));
    FormatDateString = ReplaceWordInString(FormatDateString, "yyy", to_string(Date.Year));
    return FormatDateString; 
}
int main()
{
    string DateString = ReadStringDate("Please enter Date dd/mm/yyy? ");
    stDate Date = StringToDate(DateString);

    cout << "\n" << FormatToDate(Date) << endl;
    cout << "\n" << FormatToDate(Date,"yyy/mm/dd") << endl;
    cout << "\n" << FormatToDate(Date,"dd,mm,yyy") << endl;
    cout << "\n" << FormatToDate(Date,"dd-mm-yyy") << endl;
    cout << "\n" << FormatToDate(Date,"dd-Sharaf-mm-Sharaf-yyy") << endl;
    cout << "\n" << FormatToDate(Date,"Daye:dd, Month:mm,Year: yyy") << endl;

    
}

