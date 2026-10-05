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
int countDigitFrequencey(int Number,int DigitToCheck)
{
	int Freqcount = 0, Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		if (DigitToCheck == Remainder)
		{
			Freqcount++;
		}
		
	}
	return Freqcount;

	
}
void PrintAllDigitFrequencey(int Number)
{
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		
		int DigitFrequencey = countDigitFrequencey(Number,i);
		if (DigitFrequencey > 0)
		{
			cout << " Digit " << i << "Frequencey is " << DigitFrequencey <<  " Time(s).\n";
		}
	}

}

int main()
{
	int Number = ReadPositiveNumber("Please enter the Number? ");
	PrintAllDigitFrequencey(Number);
}




