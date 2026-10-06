#include <iostream>
using namespace std;
int ReadYear()
{
	int Year = 0;
	cout << "Please enter any Year? " << endl;
	cin >> Year;
	return Year;
}

bool IsLeapYear(int Year)
{
	if (Year % 400 == 0)
	{
		return true;
	}
	else if (Year % 100 == 0)
	{
		return false; 
	}
	else if (Year % 4 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}


}


int main()
{
	int Year = ReadYear();
	if (IsLeapYear(Year))
	{
		cout << "\nYes, Year [" << Year << "] is  a Leap Year\n";
	}
	else
	{
		cout << "\nNo, Year [" << Year << "] is Not a Leap Year\n";

	}
	return 0;
  
}
