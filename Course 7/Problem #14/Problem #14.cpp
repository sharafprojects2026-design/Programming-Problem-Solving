#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;


void PrintMatrix(int Matrix[3][3], int Row, int Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            cout << Matrix[i][j] << " \t";
        }
        cout << endl;
    }
}

bool IsScalarMatrix(int Matrix1[3][3], int Row, int Col)
{
    int diagonalValue = Matrix1[0][0];
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0 ; j < Col; j++)
        {
            if (i == j && Matrix1[i][j] != diagonalValue)
            {
                return false;
            }
            if (i != j && Matrix1[i][j] != 0)
            {
                return false;
            }

        }
    }
    return true;
}

int main()
{
    //int Matrix1[3][3] = { {5,0,0},{0,1,0},{0,5,1} };
    int Matrix1[3][3] = { {9,0,0},{0,9,0},{0,5,9} };


    cout << "\nMatrix1: " << endl;

    PrintMatrix(Matrix1, 3, 3);

    if (IsScalarMatrix(Matrix1, 3, 3))
        cout << "\nYes,Matrix is Scalar.\n";
    else
        cout << "\nNo, Matrix is Not Scalar.\n";




    return 0;

}
