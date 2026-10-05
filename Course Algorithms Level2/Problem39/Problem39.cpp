

#include <iostream>
#include <string >
using namespace std;
enum enPrimeOrNot { Prime = 1, NotPrime = 2 };
enPrimeOrNot CheckPrime(int Number)
{
    if (Number < 2)
    {
        return enPrimeOrNot::NotPrime;
    }
    int M = Number / 2;
    for (int i = 2; i <= M; i++)
    {
        if (Number % i== 0)
        {
            return enPrimeOrNot::NotPrime;
        }
        
    }
    return enPrimeOrNot::Prime;
}
int ReadNumber()
{
    int Number;
    cout << " Please enter a Number ?" << endl;
    cin >> Number;
    return Number;
}
int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}
void FillArray(int arr[100], int& arrLength)
{

    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}
void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
}
void CopyPrimeNumbers(int arr[100], int Arr1[100], int arrLength, int& arrLength1)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (CheckPrime(arr[i])== enPrimeOrNot::Prime)
        {
            AddArrayElement(arr[i], Arr1, arrLength1);
        }

    }

}
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrLength = 0;
    arrLength = ReadNumber();

    FillArray(arr, arrLength);
    cout << " \n Array 1 elements:\n";
    PrintArray(arr, arrLength);
    cout << endl;
    int Arr1[100], arrLength1 = 0;
    CopyPrimeNumbers(arr, Arr1, arrLength, arrLength1);
    cout << "\n Array 2 Prime numbers:\n";
    PrintArray(Arr1, arrLength1);



}

