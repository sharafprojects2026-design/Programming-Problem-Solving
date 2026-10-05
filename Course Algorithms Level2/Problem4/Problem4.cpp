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
bool IsPerfectNumber(int Number)
{
	int Sum = 0;
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
		{
			Sum += i;
		}


	}
	return Sum == Number;
}
void PrintResults(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		if (IsPerfectNumber(i))
		{
			cout << i << endl;
		}
	}
}

int main()
{

	PrintResults(ReadPositiveNumber("Please enter a Positive Number "));
	return 0;

}