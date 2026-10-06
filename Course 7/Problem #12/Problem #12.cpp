#include <iostream>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillMatrixWithRandomNumber(int matrix[3][3], int Row, int Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            matrix[i][j] = RandomNumber(1, 10);
        }
   }
}
void PrintMatrix(int Matrix[3][3], int Row, int Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            printf("%0*d \t", 2, Matrix[i][j]);
        }
        cout << endl;
    }
}

bool AreTypcalMatrices(int Matrix1[3][3], int Matrix2[3][3], int Row, int Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (Matrix1[i][j] != Matrix2[i][j])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    srand((unsigned)time(NULL));
    int Matrix1[3][3], Matrix2[3][3];

    FillMatrixWithRandomNumber(Matrix1, 3, 3);

    cout << "Matrix1: \n";

    PrintMatrix(Matrix1, 3, 3);

    FillMatrixWithRandomNumber(Matrix2, 3, 3);

    cout << "\nMatrix2: \n";

    PrintMatrix(Matrix2, 3, 3);

    if (AreTypcalMatrices(Matrix1, Matrix2, 3, 3))
    {
        cout << "Yes,Both Mmatrices are Typical.";
    }
    else
    {
        cout << "No, Matrices are Not Typical.\n";
    }

  


    return 0;

}
