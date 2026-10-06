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

void PrintMiddleRowOfMatrix(int Matrix[3][3],  int row, int Cols)
{
    short MiddleCol = row / 2;
    for (int i = 0 ; i < Cols; i++)
    {
        printf("%0*d\t",2, Matrix[MiddleCol][i]);
       
    }
}

void PrintMiddleColOfMatrix(int Matrix[3][3], int Row, int Cols)
{
    short MidlleRow = Cols / 2;
    for (int i = 0 ; i < Row ; i++)
    {
        printf("%0*d\t", 2, Matrix[i][MidlleRow]);
    }
}


int main()
{
    srand((unsigned)time(NULL));
    int Matrix1[3][3], arrMiddleRow[50],arrMiddleCols[50];

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    cout << "Matrix1: \n";
    PrintMatrix(Matrix1, 3, 3);
    
    
    cout << "\nMiddle Row  Of Matrix1 is : \n";
    PrintMiddleRowOfMatrix(Matrix1, 3, 3);
   

    

    cout << "\nMiddle Col Of Matrix is: \n";
    PrintMiddleColOfMatrix(Matrix1, 3, 3);
    
   
    return 0;

}
