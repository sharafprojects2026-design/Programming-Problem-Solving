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
int ReversNumber(int Number)
{
	int Remainder, Number2 = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;
}

void PrintNumberFromLeftToRight(int Number)
{

	int Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		cout << Remainder << endl;
		
	}
	
	
}

int main()
{
	PrintNumberFromLeftToRight(ReversNumber(ReadPositiveNumber("Please enter A Number")));
	 


}