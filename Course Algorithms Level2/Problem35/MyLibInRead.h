#pragma once
#include <iostream>
using namespace std;

namespace MyLibInRead
{
    int ReadPositiveNumber(string Message)
    {
        int Number = 0;
        do
        {
            cout << Message << endl;
            cin >> Number;
        } while (Number <= 0);
        return Number;
    }
    int  ReadPosition()
    {
        int Number;
        cout << " \nPlease enter a number to search for?\n";
        cin >> Number;
        return Number;
    }
}
