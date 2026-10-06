#include <iostream>
#include <iomanip>
using namespace std;


void PrintMatrix(int Matrix[3][3], int Row, int Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
           cout <<  Matrix[i][j] << " \t";
        }
        cout << endl;
    }
}

bool IsIdentityMatrix(int Matrix1[3][3], int Row, int Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (i == j && Matrix1[i][j] != 1)
            {
                return false;
            }
            else
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
    int Matrix1[3][3] = { {1,0,0},{0,1,0},{0,0,1} };


    cout << "\nMatrix1: " << endl;

    PrintMatrix(Matrix1, 3, 3);

    if (IsIdentityMatrix(Matrix1, 3, 3))
        cout << "\nYes,Matrix is Identity.\n";
    else
        cout << "\nNo, Matrix is Not Identity.\n";
    
  


    return 0;

}
