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
int  SumOfMatrix(int arr[3][3], int Row, int Cols)
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

bool AreEqualMatrices(int Matrix1[3][3], int Matrix2[3][3], int Row, int Cols)
{
    return (SumOfMatrix(Matrix1, Row, Cols) == SumOfMatrix(Matrix2, Row, Cols));
}
int main()
{
    srand((unsigned)time(NULL));
    int Matrix1[3][3], Matrix2[3][3];

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    cout << "Matrix1: \n";
    PrintMatrix(Matrix1, 3, 3);

    FillMatrixWithRandomNumbers(Matrix2, 3, 3);

    cout << "\nMatrix2:  \n";

    PrintMatrix(Matrix2, 3, 3);

    if (AreEqualMatrices(Matrix1,Matrix2,3,3))
    
        cout << "YES,both Matrices are Equal\n";
    
    else
    
        cout << "\n No: Matrices are Not Equal.\n";
    



    return 0;

}
