#include <iostream>
#include <string >
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
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}
void FillArray(int Arr[100], int arrLength)
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
}
int  ReadPosition()
{
    int Number;
    cout << " \nPlease enter a number to search for?\n";
    cin >> Number;
    return Number;
}

int SearchAboutNumberInArray(int Number, int Arr[100], int arrLength)
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

int main()
{
    int Arr[100];
    int arrLength = ReadPositiveNumber("Please enter A Positive Number? ");
    FillArray(Arr, arrLength);
    cout << " Array 1 elements: \n";
    PrintArray(Arr, arrLength);
    int Number = ReadPosition();
    cout << "\n Number you are Looking for is:" << Number << endl;
    int NumberPosition = SearchAboutNumberInArray(Number, Arr, arrLength);
    if (NumberPosition == -1)
    {
        cout << " the Number is not founf:-( \n";
        
    }
    else
    {
        cout << " The Number found at Position: " << NumberPosition << endl;
        cout << "The Number Found its order : " << NumberPosition + 1 << endl;
    }
    
}

