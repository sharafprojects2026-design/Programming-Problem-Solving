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
    } while (Number <= 0);
    return Number;
}

int RandomNumber(int From, int To)
{
    int RandNumber = rand() % (To - From + 1) + From;
    return RandNumber;
}

void FillArrayWithRandomNumbers(int Arr[100], int &arrLength)
{
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
    cout << endl;
}

void CopyArrayAfterReversedOrder(int Arr[100], int Arr2[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        Arr2[i] = Arr[arrLength - 1 - i];
        
        
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int Arr[100], Arr2[100];
    int arrLength = ReadPositiveNumber("Please enter a positive number");

    FillArrayWithRandomNumbers(Arr, arrLength);

    cout << "\nArray 1 elements:\n";
    PrintArray(Arr, arrLength);

    CopyArrayAfterReversedOrder(Arr, Arr2, arrLength);

    cout << "\nArray 2 elements after Copying Array 1 in Reversed Order:\n";
    PrintArray(Arr2, arrLength);

    return 0;
}
