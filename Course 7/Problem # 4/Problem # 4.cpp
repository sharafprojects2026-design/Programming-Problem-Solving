
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillMatrixWithRandomNumber(int Arr[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            Arr[i][j] = RandomNumber(1, 100);
        }

    }

}
void PrintMatrix(int arr[3][3], int Rows, int Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "\t ";
        }
        cout << endl;
    }
}

int ColsSum(int arr[3][3], int RowNumber, int Cols)
{
    int Sum = 0;
    for (short j = 0; j < RowNumber; j++)
    {
        Sum += arr[j][Cols];
    }
    return Sum;
}


void PrintRowsSumArray(int arr[3][3], int Row, int Cols)
{
   

    cout << "\nThe the following are the sum of each row in the matrix:\n";
    for (short i = 0; i < Cols; i++)
    {
       
        cout << " Row " << i + 1 << " Sum = " << ColsSum(arr, Row, i) << endl;
    }
}


int main()
{
    srand((unsigned)time(NULL));
    int Arr[3][3];
    int arrSum[3];
    FillMatrixWithRandomNumber(Arr, 3, 3);

    cout << "The Following is a 3x3 Randome Matrix: \n";

    PrintMatrix(Arr, 3, 3);


    PrintRowsSumArray(Arr, 3, 3);

    return 0;

}

