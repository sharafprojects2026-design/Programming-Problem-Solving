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

bool IsPalindromeThisMatrix(int Matrix[3][3], int Row, int Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col / 2; j++)
        {
            if (Matrix[i][j] != Matrix[i][Col - 1 - j])
            {
                return false;
            }
        }
    }
    return true;
}


int main()
{

    int Matrix1[3][3] = { {55, 3, 3},{4, 5, 7},{13, 9, 3} };
  //  int Matrix1[3][3] = { {1,2,1},{5,5,5},{7,3,7} };


    cout << "\nMatrix1: " << endl;
    PrintMatrix(Matrix1, 3, 3);

  
    if (IsPalindromeThisMatrix(Matrix1, 3, 3))
        cout << "\nYes,Matrix is Palindrome.\n";
    else
        cout << "\nNo,Matrix is Not Palindrome.\n";

    cout << endl;

    return 0;

}
