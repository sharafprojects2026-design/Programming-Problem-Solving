#include <iostream>
#include <string>
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

int CountNumberInMatrix(int Matrix[3][3], int Number, int Row, int Col)
{
    int CountNumber = 0;

    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (Matrix[i][j] == Number)
            {
                CountNumber++;

            }
        }


    }
    return CountNumber;
}

bool IsSparceInMatrix(int Matrix1[3][3], int Row, int Col)
{
    int MatrixSize = Row * Col;

    return (CountNumberInMatrix(Matrix1, 0, Row, Col) >= MatrixSize /2);
}

int main()
{
    int Matrix1[3][3] = { {0, 0, 3},{4, 0, 0},{7, 7, 0} };
  

    cout << "\nMatrix1: " << endl;
    PrintMatrix(Matrix1, 3, 3);

  
    if (IsSparceInMatrix(Matrix1, 3, 3))

        cout << "\nYese, It is Sprace.\n";
    else


        cout << "\n No,It is Not Sprace.\n";
   
    return 0;

}
