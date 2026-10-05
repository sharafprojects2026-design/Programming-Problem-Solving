#include <iostream>
#include < string >
using namespace std;

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

int ReadPositveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);
    return Number;
}

void FillArrayWithRandomNumbers(int Arr[100], int arrLength)
{
    
    for (int i = 0; i < arrLength; i++)
    {
        Arr[i] = RandomNumber(1, 100);
    }
}




void SumOf2Array(int Arr[100], int Arr2[100], int arrSum[100], int arrLength)
{
   
    
    for (int i = 0; i < arrLength; i++)
    {
        arrSum[i] = Arr[i] + Arr2[i];
    }
}

void PrintArray(int Arr[100],int arrLength)
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
    int Arr[100], Arr2[100], Sum[100];
    int arrLength = ReadPositveNumber("How many elements\n");
    FillArrayWithRandomNumbers(Arr, arrLength);
    FillArrayWithRandomNumbers(Arr2, arrLength);

    SumOf2Array(Arr, Arr2, Sum, arrLength);
    cout << "\n Array 1 element:\n";
    PrintArray(Arr, arrLength);

    cout << "\n Array 2 element:\n";
    PrintArray(Arr2, arrLength);

    cout << "\n Sum of array and array2 elements:\n";
    PrintArray(Sum, arrLength);
    return 0;
}

