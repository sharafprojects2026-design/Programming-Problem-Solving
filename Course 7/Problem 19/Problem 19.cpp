#include <iostream>
#include <string>
#include <iomanip>
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

int minNumberInMatrix(int Matrix1[3][3], int Row, int Col)
{
    int min = Matrix1[0][0];
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (Matrix1[i][j] < min)
            {
                min = Matrix1[i][j];
            }

        }
    }
    return min;
}
int MaxNumberInMatrix(int Matrix[3][3], int Row, int Col)
{

    int Max = Matrix[0][0];
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (Matrix[i][j] > Max)
            {
                Max = Matrix[i][j];
            }
        }
    }
    return Max;
}
int main()
{
   
    int Matrix1[3][3] = { {55, 3, 3},{4, 5, 7},{13, 9, 3} };


    cout << "\nMatrix1: " << endl;
    PrintMatrix(Matrix1, 3, 3);

    cout << "\nMinimum Number is: " << minNumberInMatrix(Matrix1, 3, 3);

    cout << "\n\n Max Number is:  " << MaxNumberInMatrix(Matrix1, 3, 3);

    
    cout << endl;

    return 0;

}
