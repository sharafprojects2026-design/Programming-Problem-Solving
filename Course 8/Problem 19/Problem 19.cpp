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
bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	if (Date1.Year != Date2.Year)
		return Date1.Year < Date2.Year;

	if (Date1.Month != Date2.Month)
		return Date1.Month < Date2.Month;

	return Date1.Day < Date2.Day;
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

bool IsLastDayInMonth(stDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}
bool IsLastMonthInYear(short Month)
{
	return (Month == 12);
}

stDate IncreaseDateByOneDay(stDate Date1)
{
	if (IsLastDayInMonth(Date1))
	{
		if (IsLastMonthInYear(Date1.Month))
		{
			Date1.Day = 1;
			Date1.Month = 1;
			Date1.Year++;
		}
		else
		{
			Date1.Day = 1;
			Date1.Month++;
		}

	}
	else
	{
		Date1.Day++;
	}

	return Date1;
}

int GetDifferenceInDays(stDate Date1, stDate Date2, bool IncludeEndDay = false)
{
	int Days = 0; 
	int SwapFlageValue = 1;
	
	if (!IsDate1BeforeDate2(Date1, Date2));
	{
		stDate TempDate = Date1;
		Date1 = Date2;
		Date2 = TempDate;

		SwapFlageValue = -1;

	}
	while (IsDate1BeforeDate2(Date1, Date2))
	{
		Days++;
		Date1 = IncreaseDateByOneDay(Date1);
	}
	return IncludeEndDay ? (++Days * SwapFlageValue) : (Days * SwapFlageValue);
}

int main()
{
	stDate Date1 = ReadFullDate();
	stDate Date2 = ReadFullDate();

	int Dates = GetDifferenceInDays(Date1, Date2);
	cout << "\n\nDiffrence is: " << Dates << "Daye(s)\n";
	cout << "Diffrence (Including End Day) is : " << GetDifferenceInDays(Date1, Date2, true) << " Day(s).\n";



	system("pause>0");
	return 0;
}