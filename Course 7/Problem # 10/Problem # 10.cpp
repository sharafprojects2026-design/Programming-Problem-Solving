#include <iostream>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], int Row, int Cols)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }
    }
}




void PrintMatrix(int arr[3][3], int Row, int Cols)
{

    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf("%02d ", arr[i][j]);
            cout << "\t";
        }
        cout << endl;
    }
}
int  SumAllMatrix(int arr[3][3], int Row, int Cols)
{
    int Sum = 0;
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Sum = Sum + arr[i][j];

        }
    }
    return Sum;
}

int main()
{
    srand((unsigned)time(NULL));
    int Matrix1[3][3];

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    cout << "Matrix1: \n";
    PrintMatrix(Matrix1, 3, 3);

    cout << "\nSum Of Matrix1 is: " << SumAllMatrix(Matrix1, 3, 3) << endl;

   

    return 0;

}
