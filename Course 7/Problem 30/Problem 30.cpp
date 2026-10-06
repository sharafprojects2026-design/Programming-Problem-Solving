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

int CountLatter(string S1, char Latter)
{
	int CountLatter = 0;

	for (int i = 0; i < S1.length(); i++)
	{
		if (S1[i] == Latter)
		{
			CountLatter++;
		}
	}
	return CountLatter;
}

int main()
{
	string S1 = ReadString();
	char C = ReadCharacter();

	cout << "Letter '" << C << "' Count =" << CountLatter(S1, C) << endl;
	

	return 0;
}
