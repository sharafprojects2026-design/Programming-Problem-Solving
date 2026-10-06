#include <iostream>
#include <string>
#include <cctype>
using namespace std;



string ReadString()
{
	string S1 = "";
	cout << "\nPlease enter Your string? " << endl;
	getline(cin, S1);
	return S1;
}

bool IsVowel(char Latter)
{
	Latter = tolower(Latter);

	return  (Latter == 'a') || (Latter == 'e') || (Latter == 'u') || (Latter == 'i') || (Latter == 'o');



}

void PrintVowel(string S1)
{

	int Count = 0;
	for (int i = 0; i < S1.length(); i++)
	{
		if (IsVowel(S1[i]))
		{
			cout << S1[i] << " \t";
		}
	}
	

}
int main()
{

	string S1 = ReadString();
	cout << "Vowels in String are: ";
	PrintVowel(S1);



	return 0;
}
