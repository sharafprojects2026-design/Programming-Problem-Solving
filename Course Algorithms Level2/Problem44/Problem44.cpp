#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << " Please enter a Number ? " << endl;
    cin >> Number;
    return Number;
}
int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}
void FilArray(int arr[100], int& arrLength)
{
    cout << "Please enter a Number? " << endl;
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(-100, 100);
    }
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int CountPositive(int Arr[100], int arrLength)
{
    int Count = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (Arr[i] >= 0)
        {
            Count++;
        }
    }
    return Count;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrLength = 0;

    FilArray(arr, arrLength);
    cout << " Array Elements:";
    PrintArray(arr, arrLength);

    cout << "\n Positive Numbers count is: " << CountPositive(arr, arrLength) << endl;
}
