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
	} while (Number <= 0);
	return Number;
}
int ReversedNumber(int Number)
{
	int Remainder, Number2 = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		Number2 = Number2 * 10 + Remainder;
		
	}
	return Number2;

	 
}

int main()
{
	cout << " \nReverse is: \n "
		<< ReversedNumber(ReadPositiveNumber("Please enter A Positive Number? "))
		<< "\n";
		
	

}
