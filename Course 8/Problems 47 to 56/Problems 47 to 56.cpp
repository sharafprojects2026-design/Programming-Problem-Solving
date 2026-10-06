#pragma warning(disable : 4996
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

short NumberOfDaysFromTheBeginingOfTheYear(short Day, short Month, short Year)
{
	short TotalDays = 0;
	for (int i = 1; i <= Month - 1; i++)
	{
		TotalDays += NumberOfDaysInAMonth(i, Year);
	}
	TotalDays += Day;
	return TotalDays;
}


short DayOfWeekOrder(stDate Date)
{

	short a = (14 - Date.Month) / 12;
	short y = Date.Year - a;
	short M = Date.Month + (12 * a - 2);
	return  (Date.Day + y + (y / 4) - (y / 100) + (y / 400) + (31 * M / 12)) % 7;

}
string DayShortName(int DayOrder) {
	string Days[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
	return Days[DayOrder];
}


bool IsEndOfWeek(short DayOrder)
{
	return (DayOrder == 6);
}

bool IsWeekEnd(short DayOrder)
{
	return (DayOrder == 5 || DayOrder == 6);
}
bool IsBusinessDay(short DayOrder)
{

	return (DayOrder >= 0 && DayOrder <= 4);
}

int DaysUntilTheEndOfWeek(int DayOrder)
{
	return (6 - DayOrder);

}



int NumberOfDaysInYear(int Year)
{
	return isLeapYear(Year) ? 366 : 365;

}

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool IsLastDayInMonth(stDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month,Date.Year));
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


int GetDifferenceInDays(stDate Date1, stDate Date2, bool IncludeEndDay = false)
{
	int Days = 0;
	while (IsDate1BeforeDate2(Date1, Date2))
	{
		Days++;
		Date1 = IncreaseDateByOneDay(Date1);
	}
	return IncludeEndDay ? ++Days : Days;
}
int DaysUntilTheEndOfYear(stDate Date)
{
	stDate EndOfMonthDate;
	EndOfMonthDate.Day = 31;
	EndOfMonthDate.Month = 12;
	EndOfMonthDate.Year = Date.Year;

	return GetDifferenceInDays(Date, EndOfMonthDate, true);
}

int DaysUntilTheEndOfMonth(stDate Date)
{

	stDate EndOfMonthDate;
	EndOfMonthDate.Day = NumberOfDaysInAMonth(Date.Month, Date.Year);
	EndOfMonthDate.Month = Date.Month;
	EndOfMonthDate.Year = Date.Year;

	return GetDifferenceInDays(Date, EndOfMonthDate, true);



}
stDate GetSystemDate()
{
	stDate Date;
	time_t t = time(0);
	tm* now = localtime(&t);
	Date.Year = now->tm_year + 1900;
	Date.Month = now->tm_mon + 1;
	Date.Day = now->tm_mday;
	return Date;
}
int main()
{
	stDate Date = GetSystemDate();
	 short DayOrder = DayOfWeekOrder(Date);
	 cout << "Today is " << DayShortName(DayOrder) << " , " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	 cout << "\nIs It End Of Week ? " << endl;
	 if (IsEndOfWeek(DayOrder))
		 cout << "Yes, It is end of week.\n";
	 else
		 cout << "No, It is Not end of week.\n";

	 cout << "\nIs it Week end ? " << endl;
	 if (IsWeekEnd(DayOrder))
		 cout << "\nYes,it is a Week end.\n";
	 else
		 cout << "No,it is Not a Week end.\n";
	 
	 cout << "\nIs it Busines\n";
	 if (IsBusinessDay(DayOrder))
		 cout << "Yes,It is a Business Day\n";
	 else
		 cout << "No,It is not a Business Day\n";
		 

	 cout << "\nDays Until end of Week : " << DaysUntilTheEndOfWeek(DayOrder) << " Day(s).\n";

	 cout << "Days Until end Of Month: " << DaysUntilTheEndOfMonth(Date) << " Day(s)" << endl;
	 cout << "Days until wnd Of Year : " << DaysUntilTheEndOfYear(Date) << " Day(s)" << endl;
	
	return 0;
}






