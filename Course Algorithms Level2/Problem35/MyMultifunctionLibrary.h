#pragma once
#include <iostream>
using namespace std;

namespace MyMultiFunctionLibrary
{
    int RandomNumber(int From, int To)
    {
        int RandNum = rand() % (To - From + 1) + From;
        return RandNum;
    }
    void FillArray(int Arr[100], int arrLength)
    {
        for (int i = 0; i < arrLength; i++)
        {
            Arr[i] = MyMultiFunctionLibrary::RandomNumber(1, 100);
        }
    }

    void PrintArray(int Arr[100], int arrLength)
    {
        for (int i = 0; i < arrLength; i++)
        {
            cout << Arr[i] << " ";
        }
    }
}
