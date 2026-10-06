#include <iostream>
using namespace std;
int ReadYear()
{
	int Year = 0;
	cout << "Please enter a Your to Check? " << endl;
	cin >> Year;
	return Year;
}
int ReadAMounth()
{
	int Mounth = 0;
	cout << "Please enter a Mounth to Check? " << endl;
	cin >> Mounth;
	return Mounth;
}

bool IsLeapYear(int Year)
{
	return ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0));

}

int NumberOfDaysInMounth(int Year, int Mounth)
{
	if (Mounth < 1 || Mounth > 12)
	{
		return 0;
	}
	int NumberOfDMounth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Mounth == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDMounth[Mounth - 1];

}
int main()
{
	int Year = ReadYear();
	int Mounth = ReadAMounth();

	cout << "Number Of Days in Mounth [" << Mounth << "] is " << NumberOfDaysInMounth(Year, Mounth);
	return 0;

}


