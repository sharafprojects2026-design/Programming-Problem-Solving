#include <iostream>
#include <string>

using namespace std;
long ReadPositiveNumber(string Message)
{
	long Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;

}
long CountDigitFrequency(long Number, long DigitToCheck)
{
	int FreqCount = 0, Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;

		if (DigitToCheck == Remainder)
		{
			FreqCount++;
		}
		
	}
	return FreqCount;
}


int main()
{

	long  Number = ReadPositiveNumber("Please enter A Number? ");
	int DigitToCheck = ReadPositiveNumber("Please enter On Digit ToCheck? ");
	cout << "\nDigit " << DigitToCheck << " Frequency is "
		<< CountDigitFrequency(Number, DigitToCheck) << "Time(s).\n";


}