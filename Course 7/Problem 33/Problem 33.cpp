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

bool CheckIsVowel(char Latter)
{
	Latter = tolower(Latter);

	return  (Latter == 'a') || (Latter == 'e') || (Latter == 'u') || (Latter == 'i') || (Latter == 'o');



}

int Isvowel(string S1)
{

	int Count = 0; 
	for (int i = 0; i < S1.length(); i++)
	{
		if ( CheckIsVowel(S1[i]))
		{
			Count += 1;
		}
	}
	return Count;

}
int main()
{

	string S1 = ReadString();

	cout << "\n\nNumber of Values is : " << Isvowel(S1) <<endl;



	return 0;
}
