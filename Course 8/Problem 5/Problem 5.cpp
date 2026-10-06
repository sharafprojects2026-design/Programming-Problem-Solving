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

int NumberOfDaysInMounth(int Year,int Mounth)
{
	if (Mounth < 1 || Mounth > 12)
	{
		return 0;
	}
	if (Mounth == 2)
	{
		return IsLeapYear(Year) ? 29 : 28;
	}
	int Arr31Days[7] = { 1,3,5,7,8,10,12 };

	for (int i = 1; i <= 7; i++)
	{
		if (Arr31Days[i - 1] == Mounth)
		{
			return 31;
		}
	}
	return 30;
	
	

}

int NumberOfHoursInMounth(int Year, int Mounth)
{
	return NumberOfDaysInMounth(Year,Mounth) * 24;
}

int NumberOfMinutesInMounth(int Year,int Mounth)
{
	return  NumberOfHoursInMounth(Year,Mounth) * 60;

}

int NumberOfSecondsInMounth(int Year,int Mounth)
{
	return  NumberOfMinutesInMounth(Year,Mounth) * 60;

}

void PrintYearDetails(int Year,int Mounth)
{
	cout << "Number Of Days in    Mounth    [" << Mounth << "] is " << NumberOfDaysInMounth(Year,Mounth) << endl;
	cout << "Number Of Hours in   Mounth    [" << Mounth << "] is " << NumberOfHoursInMounth(Year,Mounth) << endl;
	cout << "Number Of Minutes in Mounth    [" << Mounth << "] is " << NumberOfMinutesInMounth(Year,Mounth) << endl;
	cout << "Number Of Seconds in Mounth    [" << Mounth << "] is " << NumberOfSecondsInMounth(Year,Mounth) << endl;

}
int main()
{
	int Year = ReadYear();
	int Mounth = ReadAMounth();

	PrintYearDetails(Year,Mounth);

	return 0;

}


