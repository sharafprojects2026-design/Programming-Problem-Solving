#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString()
{
	string S1 = "";
	cout << "Please enter Your String? " << endl;
	getline(cin, S1);
	return S1;
}

char ReadCharacter()
{
	char Ch1 = ' ';
	cout << "\nPlease enter a Character? " << endl;
	cin >> Ch1;
	return Ch1;
}

char InvertLetterCase(char char1)
{
	return isupper(char1) ? tolower(char1) : toupper(char1);
}
int CountLatter(string S1, char Latter, bool MatchCase =true)
{
	int CountLatter = 0;

	for (int i = 0; i < S1.length(); i++)
	{
		if (MatchCase)
		{
			if (S1[i] == Latter)

				CountLatter++;
		}
		else
		{
			if (tolower(S1[i]) == tolower(Latter))

				CountLatter++;
		}

	}
	return CountLatter;
}




int main()
{
	string S1 = ReadString();
	char C = ReadCharacter();

	cout << "Letter '" << C << " ' Count =" << CountLatter(S1, C) << endl;
	cout << "\nLetter '" << C << "'";
	cout << "Or '" << InvertLetterCase(C) << "'";

	cout << "count = " << CountLatter(S1, C, false) << endl;


	


	return 0;
}
