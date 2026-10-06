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
short NumberOfDaysFromTheBeginingOfTheYear(short Day, short Month,
	short Year)
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
stDate getDateFromDayOrderInYear(short DateOrderInYear, short Year)
{
	stDate Date;
	int RemaingDayes = DateOrderInYear;
	Date.Month = 1;
	Date.Year = Year;
	short MonthDay = 0;

	while (true)
	{
		MonthDay = NumberOfDaysInAMonth(Date.Month, Year);
		if (RemaingDayes > MonthDay)
		{
			RemaingDayes -= MonthDay;
			Date.Month++;
		}
		else
		{
			Date.Day = RemaingDayes;
			break;
		}

	}
	return Date;
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
int main()
{
	short Day = ReadDay();
	short Month = ReadMonth();
	short Year = ReadYear();
	short DaysOrderInYear = NumberOfDaysFromTheBeginingOfTheYear(Day, Month, Year);

	cout << "Number Of Days From The Begning Of TheYear is " << DaysOrderInYear << "\n\n";

	stDate Date; 
	Date = getDateFromDayOrderInYear(DaysOrderInYear, Year);

	cout << "Dat For [" << DaysOrderInYear << "] is:" << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
	
	
	system("pause>0");
	return 0;
}