#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int RandomNumber(int From, int To)
{
    int RandNumber = rand() % (To - From + 1) + From;
    return RandNumber;
}

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
int ReadNumber()
{
    int Number;
    cout << "Enter the Number to Count In Matrix? " << endl;
    cin >> Number;
    return  Number;
}
int CountNumberInMatrix(int Matrix[3][3], int Number, int Row, int Col)
{
    int CountNumber = 0;
    
    for (int i = 0; i <  Row; i++)
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




int main()
{
   
   
    int Matrix1[3][3] =
    {
        {1, 9, 3},
        {4, 9, 9},
        {7, 8, 9}
    };
    

    
    cout << "\nMatrix1: " << endl;
    PrintMatrix(Matrix1, 3, 3);

    int Number = ReadNumber();
    int Numbercount = CountNumberInMatrix(Matrix1, Number, 3, 3);

    cout << "Number " << Number << " Count in Matrix is " << Numbercount << endl;
    return 0;






  

}
