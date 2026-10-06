#include <iostream>
#include <iomanip>


using namespace std;


void FillMatrixFrom1To9(int arr[3][3],int Row,int Cols)
{
    int Counter = 0;
    for (int i = 0; i < Row; i++)
    {
        for (int j= 0; j < Cols; j++)
        {
            Counter++;
                arr[i][j] = Counter;
            
        }

    }
}
void PrintMatrix(int arr[3][3], int Row, int Cols)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << arr[i][j] << "\t ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3];

    FillMatrixFrom1To9(arr, 3, 3);
    cout << "The Following a 3x3 Ordered Matrix: \n";
    PrintMatrix(arr, 3, 3);
    return 0;
    
}
