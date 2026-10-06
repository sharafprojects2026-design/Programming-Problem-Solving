#include <iostream>
using namespace std;
/*void PrintNumbers(int N, int M)
{
    if (N>=M)
        cout << N << endl;
    PrintNumbers(N - 1, M);
}
*/
int PowerNumbers(int Base, int Power)
{
    if (Power == 0)
        return 1;
    else
    {
        return  (Base * PowerNumbers(Base, Power - 1));
    }
  
}
int main()
{
   // PrintNumbers(10,1);
   

    cout << PowerNumbers(2, 5);
    return 0;
}

