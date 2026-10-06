#include <iostream>
using namespace std;

struct stDate
{
	short Day;
	short Month;
	short Year;
};


bool isLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}
short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month>12)
		return 0;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) :
		days[Month - 1];
}
short ReadDay()
{
	short Day;
	cout << "\nPlease enter a Day? ";
	cin >> Day;
	return Day;
}
short ReadMonth()
{
	short Month;
	cout << "\nPlease enter a Month? ";
	cin >> Month;
	return Month;
}


short ReadYear()
{
	short Year;
	cout << "\nPlease enter a Year? ";
	cin >> Year;
	return Year;
}



stDate ReadFullDate()
{
	stDate Date;
	Date.Year = ReadYear();
	Date.Month = ReadMonth();
	Date.Day = ReadDay();
	cout << endl;
	return Date;
}

bool IsValideDate(stDate Date)
{
	
	if ( Date.Day > NumberOfDaysInAMonth(Date.Month,Date.Year) || Date.Day < 1 )
	{
		return false;
	}
	return true;

	
}

int main()
{
	
	stDate Date = ReadFullDate();

	if (IsValideDate(Date))
		cout << "\n\nYes, Date is a Valide Date.";
	else
		cout << "No, Date is not a valide Date";

	


	system("pause>0");
	return 0;
}
