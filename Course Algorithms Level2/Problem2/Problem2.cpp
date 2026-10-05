#include <iostream>
#include <string>
using namespace std;
enum enPrimeandNotPrime { Prime = 1, NotPrime = 2 };
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

enPrimeandNotPrime ChieckPrime(int Number)
{
	int M = round(Number / 2);
	for (int i = 2; i <= M; i++)
	{
		if (Number % 2 == 0)

			return enPrimeandNotPrime::NotPrime;
	}
	return enPrimeandNotPrime::Prime;
}
void PrintPrimeNumbersFrom1ToN(int Number)
{
	cout << "\n";
	cout << " Prime Number from " << 1 << " To " << Number;
	cout << " are :" << endl;

	for (int i = 1; i <= Number; i++)
	{
		if (ChieckPrime(i) == enPrimeandNotPrime::Prime)
		{
			cout << i << endl;
			
		}
	}
}


int main()
{
	PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Please enter A Positive Number??"));
	return 0;

}
