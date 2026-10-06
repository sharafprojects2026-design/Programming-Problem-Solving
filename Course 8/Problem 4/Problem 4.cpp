#include <iostream>
using namespace std;
int ReadYear()
{
	int Year = 0;
	cout << "Please enter a Your to Check? " << endl;
	cin >> Year;
	return Year;
}

bool IsLeapYear(int Year)
{
	return ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0));

}

int NumberOfDaysInYear(int Year)
{
	return IsLeapYear(Year) ? 366 : 365;
	
}

int NumberOfHoursInYear(int Year)
{
	return NumberOfDaysInYear(Year) * 24;
}

int NumberOfMinutesInYear(int Year)
{
	return  NumberOfHoursInYear(Year) * 60;
	
}

int NumberOfSecondsInYear(int Year)
{
	return  NumberOfMinutesInYear(Year) * 60;
	
}

void PrintYearDetails(int Year)
{
	cout << "Number Of Days in Year    [" << Year << "] is " << NumberOfDaysInYear(Year) << endl;
	cout << "Number Of Hours in Year   [" << Year << "] is " << NumberOfHoursInYear(Year) << endl;
	cout << "Number Of Minutes in Year [" << Year << "] is " << NumberOfMinutesInYear(Year) << endl;
	cout << "Number Of Seconds in Year [" << Year << "] is " << NumberOfSecondsInYear(Year) << endl;

}
int main()
{
	int Year = ReadYear();
	PrintYearDetails(Year);
	
	return 0;

}


