#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber()
{
    float Number;
    cout << " Please enter a Number? " << endl;
    cin >> Number;
    return Number;
}


int MyFloor(float Number)
{
    if (Number >+ 0)
        return int(Number);
    else
        return int(Number) - 1;
}

int main()
{
    float Number = ReadNumber();

    cout << "C++ Round Result :" << floor(Number);
    cout << "\n My Round Resukt : " << MyFloor(Number);

}

