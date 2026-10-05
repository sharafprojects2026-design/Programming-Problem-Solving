

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
    } while (Number < 0);
    return Number;
}
void Swap(int& A, int& B)
{
    int Temp;
    Temp = A;
    A = B;
    B = Temp;
}
int RandomeNumber(int From, int To)
{
    int RandomNum = rand() % (To - From + 1) + From;
    return RandomNum;
}
void ShuffleArray(int Arr1[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        Swap(Arr1[RandomeNumber(1, arrLength) - 1], Arr1[RandomeNumber(1, arrLength) - 1]);

    }

}
void FillArraywith1ToN(int Arr1[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        Arr1[i] = i + 1;
    }
}
void    PrintArrayElementBeforeshuffle(int Arr1[100], int Number)
{
    for (int i = 0; i < Number; i++)
    {
        cout << Arr1[i] << " ";

    }
}


void PrintArryElementAfterShuffle(int Arr2[100], int Number)
{
    for (int i = 0; i < Number; i++)
    {
        cout << Arr2[i] << " ";
    }
}




int main()
{
    int Arr1[100];
    int arrLength = ReadPositiveNumber("Please enter A Number?");
    FillArraywith1ToN(Arr1, arrLength);
    cout << "\nArray element before Shuffle:\n";
    PrintArrayElementBeforeshuffle(Arr1, arrLength);

    ShuffleArray(Arr1, arrLength);

   
    cout << "\n Array elements after shuffle:\n";

    PrintArryElementAfterShuffle(Arr1, arrLength);
   
    cout << "\n";
    return 0;

    
}
