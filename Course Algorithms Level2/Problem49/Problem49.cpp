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
float getFraction(float Number)
{
	return Number - int(Number);
}
int MyCeil(float Number)
{
	
	float Fraction = getFraction(Number);
	if (abs(Fraction) > 0)
	{
		if (Number > 0)
			return int(Number) + 1;
		else
			return int(Number);
	}
	else
	{
		return int(Number);

	}
}
int main()
{
	float Number = ReadNumber();
	cout << "\n My Ceil Result : "<< MyCeil(Number) << endl;
	cout << "C++ ceil Result: " << ceil(Number);



}