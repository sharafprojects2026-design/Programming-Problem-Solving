#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char ReadCharcter()
{
	char Character = ' ';
	cout << "Please enter a Character? " << endl;
	cin >> Character;
	return Character;
}

char InvertLetterCse(char Ch1)
{
	return (isupper(Ch1) ? tolower(Ch1) : toupper(Ch1));

}

int main()
{
	char Ch1 = ReadCharcter();

	cout << "\nChar After Inverting Case: \n";
	
	Ch1 = InvertLetterCse(Ch1);
	cout << Ch1 << endl;
	return 0;
}
