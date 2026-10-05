#include <iostream>
using namespace std;

void FillArray(int arr[100], int& arrLength)
{
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
    {
        cout << " Please enter Arr[" << i + 1 << "]:";
        cin >> arr[i];
        cout << "\n";

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
bool IsPlaindromeArray(int arr[100], int arrLength)
{
    int Number2, Remainder = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] != arr[arrLength - i - 1])
        {
            return false;
        }
    }
    return true;

}

int main()
{
    int arr[100], arrLength = 0;
    FillArray(arr, arrLength);
    cout << "Array Elements: \n";
    PrintArray(arr, arrLength);
    if (IsPlaindromeArray(arr, arrLength))
        cout << "\n Yes array is Plaindrome\n";
    else
        cout << "\n No,Array is Not Plaindrome\n";
    return 0;
    
}

