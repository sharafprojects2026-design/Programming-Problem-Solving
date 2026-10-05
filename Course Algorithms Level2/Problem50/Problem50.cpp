#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber()
{
	float Number;
	cout << " Pleas enter a Number? " << endl;
	cin >> Number;
	return Number;
}

float MySqrt(float Number)
{

	return pow(Number, 0.5);
}

int main()
{
	float Number = ReadNumber();
	cout << " C++ sqrt Result: " << sqrt(Number) << endl;
	cout << " My MySqrt Result: "; 
	cout << MySqrt(Number);
   
}

