#include <iostream>
using namespace std;

void AddNumber(int, int);
int main()
{
    AddNumber(10, 20);
    return 0;
}

void AddNumber(int a, int b)
{
    cout << a + b << endl;
}
