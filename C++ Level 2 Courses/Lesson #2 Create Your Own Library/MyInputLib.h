#pragma once
#include <iostream>
using namespace std;

namespace MyInputLib
{
	int ReadNumber()
	{
		int Number;
		cout << "Please enter a Number? " << endl;
		cin >> Number;
		return Number;
	}
}
