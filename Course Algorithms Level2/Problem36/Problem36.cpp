#include <iostream>
#include <string>
using namespace std;
int ReadNumber()
{
    int Number;
    cout << " Please enter A Number? " << endl;
    cin >> Number;
    return Number;
}
void AddNumberToArray(int Number, int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
}

void InputUesrNumbersInArray(int arr[100], int& arrLength)
{
    bool AddMore = true;
    do
    {
        AddNumberToArray(ReadNumber(), arr, arrLength);
        cout << "\n Do you want to odd more numbers? [0]:No,[1]:yes?";
        cin >> AddMore;
    } while (AddMore);
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
    int arr[100], arrLength = 0;
    InputUesrNumbersInArray(arr, arrLength);
    
    cout << "\n Array Length: " << arrLength << endl;
    cout << "Array elements: ";
    PrintArray(arr, arrLength);
}

