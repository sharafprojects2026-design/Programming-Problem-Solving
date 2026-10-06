#include <iostream>
using namespace std;
double MySum(double a, double b)
{
    return (a + b);
}
int MySum(int a, int b, int c)
{
    return (a + b + c);
}
int MySum(int a, int b, int c, int d)
{
    return (a + b + c + d);
}
float MySum(float a, float b, float c)
{
    return (a + b + c);
}
int main()
{
    
    cout << MySum(542.5, 10.1) << endl;
    
    cout << MySum(10, 30, 50) << endl;
    cout << MySum(54, 63, 10, 2) << endl;
    cout << MySum(20.3f, 2.1f, 5.3f) << endl;
    
}

