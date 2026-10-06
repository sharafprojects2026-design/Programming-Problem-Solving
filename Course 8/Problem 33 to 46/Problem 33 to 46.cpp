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


void FixLeapDay(stDate& Date)
{
	if (Date.Month == 2 &&
		Date.Day == 29 &&
		!isLeapYear(Date.Year))
	{
		Date.Day = 28;
	}
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

bool IsFirstDayInMonth(stDate Date)
{
	return (Date.Day == 1);
}
bool IsFirstMonthInYear(short Month)
{
	return (Month == 1);
}

stDate DecreaseDateByOneDay(stDate Date1)
{
	if (Date1.Day == 1)
	{
		if (Date1.Month == 1)
		{
			
			Date1.Month = 12;
			Date1.Day = 31;
			Date1.Year--;
			
		}
		else
		{
		
			Date1.Month--;
			Date1.Day = NumberOfDaysInAMonth(Date1.Month, Date1.Year);
		}

	}
	else
	{
		Date1.Day--;
	}

	return Date1;
}

stDate DecreaseDateByXDay(short Days, stDate Date1)
{

	for (int i = 1; i <= Days; i++)
	{
		Date1 = DecreaseDateByOneDay(Date1);
	}

	return Date1;

}

stDate DecreaseDateByOneWeek(stDate Date1)
{
	for (int i = 1; i <= 7; i++)
	{
		Date1 = DecreaseDateByOneDay(Date1);
	}
	return Date1;
}

stDate DecreaseDateByXWeek(short Weeks, stDate Date)
{
	for (int i = 1; i <= Weeks; i++)
	{
		Date = DecreaseDateByOneWeek(Date);
	}
	return Date;
}

stDate DecreaseDateByOneMonth(stDate Date)
{
	if (Date.Month ==1 )
	{
		Date.Month = 12;
		Date.Year--;
	}
	else
	{
		Date.Month--;
	}

	short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

	if (Date.Day > NumberOfDaysInCurrentMonth)
	{
		Date.Day = NumberOfDaysInCurrentMonth;
	}
	return Date;
}

stDate DecreaseDateByXMonth(short Months, stDate Date)
{
	for (short i = 1; i <= Months; i++)
	{
		Date = DecreaseDateByOneMonth(Date);
	}
	return Date;
}
stDate DecreaseDateByOneYear(stDate Date)
{
	Date.Year--;
	FixLeapDay(Date);
	return Date;

}
stDate DecreaseDateByXYear(short Years, stDate Date)
{

	for (short i = 1; i <= Years; i++)
	{
		Date = DecreaseDateByOneYear(Date);
	}
	return Date;
}

stDate DecreaseDateByXYearFaster(short Years, stDate Date)
{

	Date.Year -= Years;
	FixLeapDay(Date);
	return Date;
}

stDate DecreaseDateByOneDecade(stDate Date)
{

	Date.Year -= 10;
	FixLeapDay(Date);
	return Date;
}

stDate DecreaseDateByXDecade(short Decades, stDate Date)
{

	for (int i = 1; i <= Decades * 10; i++)
	{
		Date = DecreaseDateByOneDecade(Date);
	}
	return Date;

}

stDate DecreaseDateByXDecadeFaster(short Decade, stDate Date)
{

	Date.Year -= Decade * 10;
	FixLeapDay(Date);
	return Date;
}

stDate DecreaseDateByOneCentury(stDate Date)
{
	Date.Year -= 100;
	FixLeapDay(Date);
	return Date;
}

stDate DecreaseDateByOneMillennium(stDate Date)
{
	Date.Year -= 1000;
	FixLeapDay(Date);
	return Date;
}
int main()
{
	stDate Date = ReadFullDate();

	cout << "\nDate After:\n";
	Date = DecreaseDateByOneDay(Date);
	cout << "\n01- Subtracting One Day is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
	Date = DecreaseDateByXDay(10, Date);
	cout << "02- Subtracting 10 Day is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByOneWeek(Date);
	cout << "03- Subtracting one Week is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByXWeek(10, Date);
	cout << "04- Subtracting 10 Weeks is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByOneMonth(Date);
	cout << "05- Subtracting one Month is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
	Date = DecreaseDateByXMonth(5, Date);
	cout << "06- Subtracting 5 Months is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByOneYear(Date);
	cout << "07- Subtracting one Year is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
	Date = DecreaseDateByXYear(10, Date);
	cout << "08- Subtracting 10 Years is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByXYearFaster(10, Date);
	cout << "09- Subtracting 10 Years (Faster) is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByOneDecade(Date);
	cout << "10- Subtracting One Decade is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByXDecade(10, Date);
	cout << "11-Subtracting 10 Decade  is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByXDecadeFaster(10, Date);
	cout << "12- Subtracting 10 Decade  is (Faster): " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByOneCentury(Date);
	cout << "13- Subtracting one Century is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByOneMillennium(Date);
	cout << "14- Subtracting one Millennium is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;



	system("pause>0");
	return 0;
}
