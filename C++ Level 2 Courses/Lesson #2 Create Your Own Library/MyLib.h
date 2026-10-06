#pragma once
#include <iostream>
using namespace std;

namespace MyLib
{
	void Test()
	{
		cout << "This is My First Function in My Library!" << endl;
	}
	int Sum2(int Num1, int Num2)
	{
		return Num1 + Num2;
	}

}