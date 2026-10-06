#include <iostream>
#include<cctype>
#include <string>
#include <vector>
using namespace std;

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
		vString.push_back(S1);
	}
	return vString;
}

string JoinString(vector<string> vString, string Delim)
{
	string S1;
	for (string& s : vString)
	{
		S1 = S1 + s + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}

string LowerAllString(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		S1[i] = tolower(S1[i]);
	}
	return S1;
}

string ReplaceWordInStringUsingSplit(string S1, string ReplaceToString, string ReplaceTo, bool MachCase = true)
{
	vector <string > vString = SplitString(S1, " ");

	for (string& S : vString)
	{
		if (MachCase)
		{
			if (S == ReplaceToString)
			{
				S = ReplaceTo;
			}
		}
		else
		{
			if (LowerAllString(S) == LowerAllString(ReplaceToString))
			{
				S = ReplaceTo;
			}
		}

	}
	return JoinString(vString, " ");

}



int main()
{
	string S1 = "Welcome To jordan , jordan is a nice country .";

	string StringToReplce = "Jordan";
	string ReplceTo = "USA";
	cout << "Original String:\n" << S1 << endl;

	cout << "\nReplace With Match Case: \n" << ReplaceWordInStringUsingSplit(S1, StringToReplce, ReplceTo) << endl;
	cout << "\nReplace With Dont Match Case:\n" << ReplaceWordInStringUsingSplit(S1, StringToReplce, ReplceTo, false) << endl;
}