#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}


void FillMatrixWithRandomNumbers(int arr[3][3], int Row, int Cols)
{
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}
void PrintMatrix(int arr[3][3], int Row, int Cols)
{
	cout << "The Following  is a 3x3 Random Matrix: \n";
	for (int i = 0; i < Cols; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << " \t";
		}
		cout << "\n";
	}
}
int ColsSum(int arr[3][3], int Row, int Cols)
{
	int Sum = 0;
	for (int j=0; j < Row; j++)
	{
		Sum += arr[j][Cols];
	
	}
	return Sum;
}
void SumMatrixColsInArray(int arr[3][3], int arrSum[3], int Rows, int Cols)
{

	for (int i = 0; i < Cols; i++)
	{
		arrSum[i] = ColsSum(arr, Rows, i);
	}
}
void PrintColsSumArray(int arr[3],  int Cols)
{
	
	cout << "\n The Folowing are the Sum of each col in the Matrix: \n";
	for (int j = 0; j <Cols ; j++)
	{
		cout << " Col " << j + 1 << " Sum = "<<  arr[j] << endl;

	}
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];
	int Arr[3];
	FillMatrixWithRandomNumbers(arr, 3, 3);

	PrintMatrix(arr, 3, 3);
	SumMatrixColsInArray(arr, Arr, 3, 3);

	PrintColsSumArray(Arr, 3);


}