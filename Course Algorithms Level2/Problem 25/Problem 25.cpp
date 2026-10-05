#include <iostream>
using namespace std;

int RandomNumber(int From,int To)
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

int MinNumberInArray(int Arr[100], int arrLength)
{
	int min = 0;
	min = Arr[0];
	for (int i = 0; i < arrLength; i++)
	{
		if (min >  Arr[i])
		{
			min = Arr[i];
		}
	}
	return min;
}


int main()
{
	int Arr[100], arrLength;
	FillArrayWithRandomNumbers(Arr, arrLength);
	cout << " ArrayElements: ";
	PrintArray(Arr, arrLength);

	cout << "min Numbers is : " << MinNumberInArray(Arr, arrLength) << endl;
   
}
