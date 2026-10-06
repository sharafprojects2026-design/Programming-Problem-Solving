#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadCharcter()
{
	string S1 = "";
	cout << "Please enter Your String? " << endl;
	getline(cin, S1);
	return S1;
}
enum enWhatToCount {SmalleLatter=1,CapitallLetters=2,All = 3 };
short  CountLetter(string S1, enWhatToCount WhatToCount = enWhatToCount::All)
{
	if (WhatToCount == enWhatToCount::All)
	{
		return S1.length();
	}
	int Count = 0;

	
	for (int i = 0; i < S1.length(); i++)
	{
		if (WhatToCount==enWhatToCount::CapitallLetters && isupper(S1[i]))
		{
			Count += 1;
		}
		if (WhatToCount == enWhatToCount::SmalleLatter && islower(S1[i]))
		{
			Count++;
		}

	}
	return Count;

}
int CountAllCapitalLetterInTheString(string S1)
{
	int CountCapital = 0;
	for (int i = 0; i < S1.length(); i++)
	{
		if (isupper(S1[i]))
		{
			CountCapital += 1;
		}

	}
	return CountCapital;
}

int CountAllSmallLetterInTheString(string S1)
{
	int Count = 0;
	for (int i = 0; i < S1.length(); i++)
	{
		if (islower(S1[i]))
		{
			Count += 1;
		}

	}
	return Count;
}


int main()
{
	string S1 = ReadCharcter();

	cout << "\nMethode 1: ";
	cout << "\nString Length = " << S1.length();
	cout << "\n\nCapital Letter Count = " << CountAllCapitalLetterInTheString(S1) << endl;
	cout << "\nSmall Letter Count     = " << CountAllSmallLetterInTheString(S1) << endl;

	cout << "\nMithode 2:";

	cout << "\nString Length = " << CountLetter(S1);
	cout << "\n\nCapital Letter Count = " << CountLetter(S1,enWhatToCount::CapitallLetters) << endl;
	cout << "\nSmall Letter Count     = " << CountLetter(S1,enWhatToCount::SmalleLatter) << endl;


	return 0;
}
