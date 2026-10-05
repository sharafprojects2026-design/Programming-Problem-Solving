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

void ReadArray(int Arr[100], short &arrLength)
{
	cout << " Enter array elements: \n";
	cin >> arrLength;
	for (int i = 0; i < arrLength ; i++)
	{
		cout << "Element [:" << i + 1 << "] :";
		cin >> Arr[i];
	}
	cout << endl;
		

}

void PrintArray(int Arr[100], short arrLength)
{
	for (int i = 0; i < arrLength ; i++)
	{
		cout << Arr[i] << "";
	}
	cout << endl;
}

int TimeRepeated(int NumberToCheck, int Arr[100], short arrLength)
{
	int Count = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (NumberToCheck == Arr[i])
		{
			Count++;
		}
	}
	return Count;
}

int main()
{
	int Arr[100]; short arrLength;
	ReadArray(Arr, arrLength);
	int NumberToCheck = ReadPositiveNumber("Enter the number you want to check: ");
	cout << " Orgenial Array ";
	PrintArray(Arr, arrLength);
	cout << " Number " << NumberToCheck;
	cout << " is Repeated ";
	cout << TimeRepeated(NumberToCheck,Arr,arrLength) << " time(s)" << endl;
}

