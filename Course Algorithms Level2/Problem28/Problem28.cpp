
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
void CopyArray(int arrSource[100],int Destination[100],int arrLength)
{
	

	for (int i = 0; i < arrLength; i++)
	{
		Destination[i] = arrSource[i];
	}
	cout << "\n";

}





int main()
{
	srand((unsigned)time(NULL));

	int Arr[100], arrLength;
	FillArrayWithRandomNumbers(Arr, arrLength);
	cout << " ArrayElements: ";
	PrintArray(Arr, arrLength);
	int Arr2[100];
	CopyArray(Arr, Arr2, arrLength);
	
	cout << " Array 2 elements after copy: ";
	PrintArray(Arr2, arrLength);
	cout << "\n";




}


