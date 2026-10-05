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
int SumOfDigits(int Number)
{
	int Remainder, Sum = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Sum = Sum + Remainder;
		
	}
	return Sum;
}

int main()
{
	cout << " Sum Of Digits = "
	<< SumOfDigits( ReadPositiveNumber("Please enter a Number"));
	cout << "\n";


	return 0;

}