#include <iostream>
#include <string >
using namespace std;
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
void FillArray( int arr[100], int& arrLength)
{
    
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}
void AddNumberToArray(int Number, int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
}
void CopyArrayUsingAddArrayElement( int arr[100], int Arr1[100], int arrLength, int &arrLength1)
{
    for (int i = 0; i < arrLength; i++)
    {
        AddNumberToArray(arr[i], Arr1, arrLength1);
        
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
    
    FillArray( arr, arrLength);
    cout << " \n Array 1 elements:\n";
    PrintArray(arr, arrLength);
    cout << endl;
    int Arr1[100], arrLength1 = 0;
    CopyArrayUsingAddArrayElement(arr, Arr1, arrLength, arrLength1);
    cout << "\n Array 2 elements after Copy:\n";
    PrintArray(Arr1, arrLength1);
    

    
}

