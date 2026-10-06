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

char InvertLetterCse(char Ch1)
{
	return (isupper(Ch1) ? tolower(Ch1) : toupper(Ch1));

}
string InvertAllStringLetterCase(string S1)
{
	
	for (int i = 0; i < S1.length(); i++)
	{
		S1[i] = InvertLetterCse(S1[i]);
	}
	return S1;

}

int main()
{
	string S1 = ReadCharcter();

	cout << "\string After Inverting All Letters Case:\n";

	S1 = InvertAllStringLetterCase(S1);
	cout << S1 << endl;

	
	return 0;
}
