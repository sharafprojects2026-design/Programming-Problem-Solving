#include <iostream>
#include <string >
#include "MyLibInRead.h"
#include "MyMultifunctionLibrary.h"
using namespace std;

int FindNumberPositionInArray(int Number, int Arr[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
    {
        if (Arr[i] == Number)
        {
            return i;

        }
    }
    return -1;
}
bool IsNumberInArray(int Number, int Arr[100], int arrLength)
{
    return FindNumberPositionInArray(Number, Arr, arrLength) != -1;
        
    
}
int main()
{
    char PlayAgain = 'y';
    do
    {
        int Arr[100];
        int arrLength = MyLibInRead::ReadPositiveNumber("Please enter A Positive Number? ");
        MyMultiFunctionLibrary::FillArray(Arr, arrLength);
        cout << " Array 1 elements: \n";
        MyMultiFunctionLibrary::PrintArray(Arr, arrLength);
        int Number = MyLibInRead::ReadPosition();
        cout << "\n Number you are Looking for is:" << Number << endl;

        if (IsNumberInArray(Number, Arr, arrLength))
            cout << "Yes, it   is  found:-(\n";
        else
        {
            cout << "No, The number is Not found:-(\n";
        }
        cout << "are You Play Again ? ";
        cin >> PlayAgain;
    } while (PlayAgain == 'y' || PlayAgain == 'Y');
    
}

