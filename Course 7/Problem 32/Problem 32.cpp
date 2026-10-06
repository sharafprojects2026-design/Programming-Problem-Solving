#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;



char ReadCharacter()
{
	char Ch1 = ' ';
	cout << "\nPlease enter a Character? " << endl;
	cin >> Ch1;
	return Ch1;
}

bool CheckIsVowel(char Latter)
{
	Latter = tolower(Latter);

	return  (Latter == 'a') || (Latter == 'e') || (Latter == 'u') || (Latter == 'i') || (Latter == 'o');
	
		

}

int main()
{
	
	char C = ReadCharacter();

	if (CheckIsVowel(C))
		cout << "Yese, Letter '" << C << "' is Vowel" << endl;
	else
		cout << "No, Letter '" << C << "' is Not Vowel" << endl;



	return 0;
}
