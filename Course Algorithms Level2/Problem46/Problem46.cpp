#include <iostream>
#include <cmath>
using namespace std;
float ReadNumber()
{
    int Number;
    cout << " Please enter a Number ? " << endl;
    cin >> Number;
    return Number;
}
float MyAbs(int Number)
{
    if (Number > 0)
    
        return Number;
  
    else
    
        return Number * -1;
    
}

int main()
{
    float Number = ReadNumber();
    cout << " My abs Result: " << MyAbs(Number) << endl;
    cout << "C++ abs Result: " << abs(Number) << endl;
    
}

