#include <iostream>
using namespace std;
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
short NumberOfDaysFromTheBeginingOfTheYear(short Day, short Month,short Year)
{
	short TotalDays = 0;
	for (int i = 1; i <= Month - 1; i++)
	{
		TotalDays += NumberOfDaysInAMonth(i, Year);
	}
	TotalDays += Day;
	return TotalDays;
}
struct stDate
{
	short Day;
	short Month;
	short Year;
};

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

stDate DateAddDay(int Days,stDate Date)
{
	int RemaingDays = Days + NumberOfDaysFromTheBeginingOfTheYear(Date.Day, Date.Month, Date.Year);
	short MonthDay = 0;
	Date.Month = 1; 

	while (true)
	{
		MonthDay = NumberOfDaysInAMonth(Date.Month, Date.Year);
		if (RemaingDays > MonthDay)
		{
			RemaingDays -= MonthDay;
			Date.Month++;
			if (Date.Month > 12)
			{
				Date.Month = 1;
				Date.Year++;
			}
		}
		else
		{
			Date.Day = RemaingDays;
			break;
		}

	}
	return Date;
	
}
int ReadAddDays()
{
	int addDays = 0;
	cout << "How Many daye to add? ";
	cin >> addDays;
	return addDays;

}
stDate ReadFullDate()
{
	stDate Date;
	Date.Year = ReadYear();
	Date.Month = ReadMonth();
	Date.Day = ReadDay();
	return Date;
}
int main()
{
	stDate Date = ReadFullDate();
	int Days = ReadAddDays();
	Date = DateAddDay(Days, Date);
	cout << "\n\nDate after Adding [" << Days << "] days is " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
	
	system("pause>0");
	return 0;
}