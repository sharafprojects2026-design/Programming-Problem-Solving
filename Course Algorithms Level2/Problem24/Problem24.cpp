# include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArrayWithRandomNumber(int Arr[100], int& arrLength)
{
	cout << "enter the Number ? ";
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
int MaxNumberInArray(int Arr[100], int arrLength)
{
	int Max = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (Arr[i] > Max)
		{
			Max = Arr[i];
		}
	}
	return Max;
}


int main()
{
	int Arr[100], arrLength;

	FillArrayWithRandomNumber(Arr, arrLength);
	cout << "Arr elements :";
	PrintArray(Arr, arrLength);
	cout << "\nMax Number is: " << MaxNumberInArray(Arr, arrLength);
	return 0;

}