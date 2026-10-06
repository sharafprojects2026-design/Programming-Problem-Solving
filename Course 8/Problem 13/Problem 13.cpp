#include <iostream>
using namespace std;

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



stDate ReadFullDate()
{
	stDate Date;
	Date.Year = ReadYear();
	Date.Month = ReadMonth();
	Date.Day = ReadDay();
	cout << endl;
	return Date;
}


bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
	
		
	
}
int main()
{
	stDate Date1 = ReadFullDate();
	stDate Date2 = ReadFullDate();

	if (IsDate1BeforeDate2(Date1, Date2))
	{
		cout << "\nYes,Date 1 is Less than Date2.\n";
	}
	else
	{
		cout << "\nNo,Date 1 is not Less than Date2.\n";
	}

	

	system("pause>0");
	return 0;
}