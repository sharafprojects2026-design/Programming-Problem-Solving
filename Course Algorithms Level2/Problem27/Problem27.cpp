
#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}
void FillArrayWithRandomNumbers(int Arr[100], int& arrLength)
{
	cout << " Please enter Any Number? ";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
	{
		Arr[i] = RandomNumber(1, 100);
	}
}
void PrintArray(int Arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << "\n";

}

int SumArray(int Arr[100], int arrLength)
{
	int Sum = 0;
	for (int i = 0; i < arrLength; i++)
	{
		Sum += Arr[i];
	}
	return Sum;
}
float ArrayAverag(int Arr[100], int  arrLength)
{
	return (float)SumArray(Arr, arrLength) / arrLength;
}




int main()
{
	srand((unsigned)time(NULL));
	int Arr[100], arrLength;
	FillArrayWithRandomNumbers(Arr, arrLength);
	cout << " ArrayElements: ";
	PrintArray(Arr, arrLength);

	cout << " Averag Of all number is : " << ArrayAverag(Arr, arrLength) << endl;



}


