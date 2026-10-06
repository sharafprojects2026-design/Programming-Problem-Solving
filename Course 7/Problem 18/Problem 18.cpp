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
bool IsNumberInMatrix(int Matrix[3][3], int Number, int Row, int Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (Matrix[i][j] == Number)
            {

                return true;
            }
        }
    }
    return false;
}


void PrintIntersectNumber(int Matrix1[3][3], int Matrix2[3][3], int Row, int Col)
{
    int Number = 0;
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            Number = Matrix1[i][j];

            if (IsNumberInMatrix(Matrix2, Number, Row, Col))

            {
                cout << setw(3) << Number << " \t ";
            }

        }
    }
}



int main()
{
    int Matrix1[3][3] = { {55, 3, 3},{4, 0, 5},{10, 9, 5} };
    int Matrix2[3][3] = { {55, 3, 3},{4, 5, 7},{13, 9, 3}};

    
    cout << "\nMatrix1: " << endl;
    PrintMatrix(Matrix1, 3, 3);

    cout << "\nMatrix2: \n";
    PrintMatrix(Matrix2, 3, 3);

    cout << "\nIntersected Number are: \n\n";
    PrintIntersectNumber(Matrix1, Matrix2, 3, 3);
    cout << endl;
    
   
    return 0;

}
