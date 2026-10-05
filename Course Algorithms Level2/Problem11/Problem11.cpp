#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
}
int ReverseNumber(int Number)
{
	int Remainder = 0, Number2 = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;
}
bool IsPlaindromeNumber(int Number)
{
	return Number == ReverseNumber(Number);

}

int main()
{
	if (IsPlaindromeNumber(ReadPositiveNumber("Please enter A Number?")))

		cout << "\nYes, It is Plindrom Number" << endl;
	else
		cout << "\nNo, It is Not Plindrome Number\n";
	return 0;
}