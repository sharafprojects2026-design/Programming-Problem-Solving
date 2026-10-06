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


void MultiplyMatrix(int Matrix1[3][3], int Matrix2[3][3],int MatrixResult[3][3], int Row, int Cols)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            MatrixResult[i][j] = Matrix1[i][j] * Matrix2[i][j];

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


int main()
{
    srand((unsigned)time(NULL));
    int Matrix1[3][3], Matrix2[3][3], MatrixResult[3][3];

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    cout << "Matrix1: \n";
    PrintMatrix(Matrix1, 3, 3);

    FillMatrixWithRandomNumbers(Matrix2, 3, 3);
    cout << "\nMatrix2: \n";
    PrintMatrix(Matrix2, 3, 3);

    MultiplyMatrix(Matrix1, Matrix2, MatrixResult, 3, 3);

    cout << "\nResults: \n";

    PrintMatrix(MatrixResult, 3, 3);
   
    return 0;

}
