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

int ReadNumber()
{
    int Number = 0; 
    cout << "Please enter The Number to Look For in Matrix? " << endl;
    cin >> Number;
    return Number;
}

bool CheckNumberExistsInMatrix(int Matrix[3][3], int Number, int Row, int Col)
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



int main()
{
    int Matrix1[3][3] = { {0, 0, 3},{4, 0, 0},{7, 7, 0} };
   


    cout << "\nMatrix1: " << endl;
    PrintMatrix(Matrix1, 3, 3);

    int Number = ReadNumber();
    if (CheckNumberExistsInMatrix(Matrix1, Number, 3, 3))
        cout << "\nYese, It is There.\n";
    else


        cout << "\n No,It is Not There.\n";

    return 0;

}
