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

stDate IncreaseDateByXDay(short Days, stDate Date1)
{

	for (int i = 1; i <= Days; i++)
	{
		Date1 = IncreaseDateByOneDay(Date1);
	}
	
	return Date1;

}

stDate IncreaseDateByOneWeek( stDate Date1)
{
	for (int i = 1; i <= 7; i++)
	{
		Date1 = IncreaseDateByOneDay(Date1);
	}
	return Date1;
}

stDate IncreaseDateByXWeek(short Weeks, stDate Date)
{
	for (int i = 1; i <= Weeks; i++)
	{
		Date = IncreaseDateByOneWeek(Date);
	}
	return Date;
}

stDate IncreaseDateByOneMonth(stDate Date)
{
	if (Date.Month == 12)
	{
		Date.Month = 1;
		Date.Year++;
	}
	else
	{
		Date.Month++;
	}

	short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

	if (Date.Day > NumberOfDaysInCurrentMonth)
	{
		Date.Day = NumberOfDaysInCurrentMonth;
	}
	return Date;
}

stDate IncreaseDateByXMonth(short Months, stDate Date)
{
	for (short i = 1; i <= Months; i++)
	{
		Date = IncreaseDateByOneMonth(Date);
	}
	return Date;
}
stDate IncreaseDateByOneYear(stDate Date)
{
	Date.Year++;
	FixLeapDay(Date);
	return Date;
	
}
stDate IncreaseDateByXYear(short Years, stDate Date)
{
	
	for (short i = 1; i <= Years; i++)
	{
		Date = IncreaseDateByOneYear(Date);
	}
	return Date; 
}

stDate IncreaseDateByXYearFaster(short Years,stDate Date)
{
	
	Date.Year += Years;
	FixLeapDay(Date);
	return Date;
}

stDate IncreaseDateByOneDecade(stDate Date)
{
	
	Date.Year += 10;
	FixLeapDay(Date);
	return Date;
}

stDate IncreaseDateByXDecade(short Decades, stDate Date)
{
	
	for (int i = 1; i <= Decades; i++)
	{
		Date = IncreaseDateByOneDecade(Date);
	}
	return Date;
	
}

stDate IncreaseDateByXDecadeFaster(short Decade, stDate Date)
{
	
	Date.Year += Decade * 10;
	FixLeapDay(Date);
	return Date;
}

stDate IncreaseDateByOneCentury(stDate Date)
{
	Date.Year += 100;
	FixLeapDay(Date);
	return Date;
}

stDate IncreaseDateByOneMillennium(stDate Date)
{
	Date.Year += 1000;
	FixLeapDay(Date);
	return Date;
}
int main()
{
	stDate Date = ReadFullDate();

	
	Date = IncreaseDateByOneDay(Date);
	cout << "\n01- Adding One Day is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
	Date = IncreaseDateByXDay(10, Date);
	cout << "02- Adding 10 Day is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByOneWeek( Date);
	cout << "03- Adding one Week is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByXWeek(10, Date);
	cout << "04- Adding 10 Weeks is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
	
	Date = IncreaseDateByOneMonth(Date);
	cout << "05- Adding one Month is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
	Date = IncreaseDateByXMonth(5, Date);
	cout << "06- Adding 5 Months is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByOneYear(Date);
	cout << "07- Adding one Year is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
	Date = IncreaseDateByXYear(10, Date);
	cout << "08- Adding 10 Years is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByXYearFaster(10,Date);
	cout << "09- Adding 10 Years (Faster) is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByOneDecade(Date);
	cout << "10- Adding One Decade is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByXDecade(10,Date);
	cout << "11- Adding 10 Decade  is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByXDecadeFaster(10, Date);
	cout << "12- Adding 10 Decade  is (Faster): " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByOneCentury(Date);
	cout << "13- Adding one Century is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByOneMillennium(Date);
	cout << "14- Adding one Millennium is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
	
	

	system("pause>0");
	return 0;
}
