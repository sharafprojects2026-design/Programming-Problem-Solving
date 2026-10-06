#include <iostream>
using namespace std;
int ReadNumber()
{
	int Number;
	
	cout << "Please enter a Number? " << endl;
	cin >> Number;
	return Number;
}



void CheckNumber (int Number)
{
	string Result = "";
	Result = (Number == 0) ? "Zero" : (Number > 0) ? "Positive" : "Negative";
	cout << "This Number is: " << Result << endl;
}

int main()
{
	int Number = ReadNumber();
	CheckNumber(Number);
	return 0;

   
}
