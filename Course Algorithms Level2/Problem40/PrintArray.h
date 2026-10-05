#pragma once

#include <iostream>
using namespace std;
namespace Print
{
    void PrintArry(int Arr[100], int arrLength)
    {
        for (int i = 0; i < arrLength; i++)
        {
            cout << Arr[i] << " ";
        }
        cout << "\n";
    }
}
