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



short DayOfWeekOrder(stDate Date)
{

	short a = (14 - Date.Month) / 12;
	short y = Date.Year - a;
	short M = Date.Month + (12 * a - 2);
	return  (Date.Day + y + (y / 4) - (y / 100) + (y / 400) + (31 * M / 12)) % 7;

}

short DayOfWeekOrder(short Day, short Month, short Year)
{

	short a = (14 - Month) / 12;
	short y = Year - a;
	short M = Month + (12 * a - 2);
	return  (Day + y + (y / 4) - (y / 100) + (y / 400) + (31 * M / 12)) % 7;

}
string DayShortName(int DayOrder) {
	string Days[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
	return Days[DayOrder];
}



bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool IsLastDayInMonth(stDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}
bool IsLastMonthInYear(short Month)
{
	return (Month == 12);
}
stDate IncreaseDateByOneDay(stDate Date)
{
	if (IsLastDayInMonth(Date))
	{
		if (IsLastMonthInYear(Date.Month))
		{
			Date.Month = 1;
			Date.Day = 1;
			Date.Year++;
		}
		else
		{
			Date.Day = 1;
			Date.Month++;
		}
	}
	else
	{
		Date.Day++;
	}
	return Date;
}



short ReadNumberVacationDays()
{
	short VacationDays = 0;
	cout << "\nPlease enter Vacation Days? ";
	cin >> VacationDays;
	return VacationDays;
}

bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year == Date2.Year) ?  ((Date1.Month == Date2.Month )? Date1.Day == Date2.Day :false) : false;

}
bool IsDate1AfterDate2(stDate Date1, stDate Date2)
{
	return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2)) ;
}


int main()
{
	cout << "Enter Date1 :\n";
	stDate Date1 = ReadFullDate();
	cout << "\nEnter Date2: \n";
	stDate Date2 = ReadFullDate();

	if (IsDate1AfterDate2(Date1, Date2))

		cout << "\nYes, Date1 is After Date2.\n";
	else
		cout << "\nNo,Date1 is not After Date2.\n";
	
	




	system("pause>0");
	return 0;
}
