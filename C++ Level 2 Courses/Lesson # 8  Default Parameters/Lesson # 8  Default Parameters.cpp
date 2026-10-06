#include <iostream>
using namespace std;
int AddNumbers(int a, int b, int c = 0, int d = 0);



int main()
{
    cout << AddNumbers(10, 20) << endl;
    cout << AddNumbers(10, 20, 30) << endl;
    cout << AddNumbers(10, 20, 30, 40) << endl;
    
    
}
int AddNumbers(int a, int b, int c , int d )
{
    return a + b + c + d;
}

