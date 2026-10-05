
#include <iostream>
using namespace std;
enum enPrimNotPrime {Prime=1,NotPrime =2};
enPrimNotPrime CheckPrime(int Number)
{
	int M = Number / 2;
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
		{
			return enPrimNotPrime::NotPrime;
		}
	}
	return enPrimNotPrime::Prime;
}

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

void CopyOnlyPrimeNumbers(int arrSource[100], int arrDestination[100], int ArrLength, int& arrLength2)
{
	int Count = 0;
	for (int i = 0; i < ArrLength; i++)
	{
		if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime)
		{
			arrDestination[Count] = arrSource[i];
			Count++;
		}

	}
	arrLength2= Count;

}
void PrintArray(int Arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << "\n";

}



int main()
{
	srand((unsigned)time(NULL));

	int Arr[100], arrLength;
	FillArrayWithRandomNumbers(Arr, arrLength);

	int Arr2[100], ArrLength2 = 0;
	CopyOnlyPrimeNumbers(Arr, Arr2,arrLength,ArrLength2);

	cout << " Element Array: ";
	PrintArray(Arr, arrLength);

	cout << "Prime Number in Array \n ";
	PrintArray(Arr2,ArrLength2);
	return 0;
	

	
}



