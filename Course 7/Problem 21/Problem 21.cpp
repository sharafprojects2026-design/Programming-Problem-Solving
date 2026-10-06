#include <iostream>
using namespace std; 
void PrintFibonacciSeriesOf10(int Number)
{
    int FibNumber = 0;
    int Prev2 = 0, Prev1 = 1;
    cout << "1  ";
    for (int i = 2; i <= Number; i++)
    {
        FibNumber = Prev2 + Prev1;

        cout << FibNumber << "   ";
        Prev2 = Prev1;
        Prev1 = FibNumber; 
        

    }
   
}
int main()
{
    PrintFibonacciSeriesOf10(10);
    return 0;
    
}

