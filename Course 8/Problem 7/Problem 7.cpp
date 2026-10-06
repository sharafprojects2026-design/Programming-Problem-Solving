#include <iostream>
using namespace std;


int ReadaYear()
{
	int Year = 0;
	cout << "Please enter a Year? " << endl;
	cin >> Year; 
	return Year; 

}

int ReadaAmounth()
{
	int Mounth = 0;
	cout << "Please enter a Mounth? " << endl;
	cin >> Mounth;
	return Mounth;

}

int ReadaDateDay()
{
	int Day = 0;
	cout << "Please enter a Day? " << endl;
	cin >> Day;
	return Day;

}

short DayOfWeekOrder(short Year, short Mounth, short Day)
{
	
	short a = (14 - Mounth) / 12;
	short y = Year - a;
	short M = Mounth + (12 * a - 2);
	return  (Day + y + (y / 4) - (y / 100) + (y / 400) + (31 * M / 12)) % 7;

}
string DayShortName(int DayOrder) {
	string Days[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
	return Days[DayOrder];
}

int main()
{
	int Year = ReadaYear();
	int Month = ReadaAmounth();
	int Day = ReadaDateDay();

	
	cout << "\nDate      :" << Day << "/" << Month << "/" << Year << endl;
	cout << "Dat Order   : " << DayOfWeekOrder(Year,Month,Day)<< endl;
	cout << "Day Name    :" << DayShortName(DayOfWeekOrder(Year, Month, Day));
	return 0;
}
	




