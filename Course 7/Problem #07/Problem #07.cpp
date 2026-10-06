#include <iostream>
#include <iomanip>

using namespace std;

void FillMatrixFrom1To9(int arr[3][3], int Row, int Cols)
{
    int Counter = 0;
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Cols; j++)
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

void TransposeMatrix(int arr[3][3],int arrTransposed[3][3], int Row, int Cols)
{
    int Counter = 0;

    for (int i = 0; i < Cols; i++)
    {
        for (int j = 0; j < Row; j++)
        {
            arrTransposed[i][j] = arr[j][i];
           
           

        }
       
    }
}


int main()
{
    int arr[3][3], arrTransposed[3][3];
    FillMatrixFrom1To9(arr, 3, 3);
    (arr, 3, 3);
    cout << "\nThe Following is  a 3x3 the Ordered Matrix:\n";
    PrintMatrix(arr, 3, 3);

    TransposeMatrix(arr, arrTransposed, 3, 3);
    cout << "\nThe Following is the Transposed Matrix:\n";
    PrintMatrix(arrTransposed, 3, 3);
   
   
    return 0;

}
