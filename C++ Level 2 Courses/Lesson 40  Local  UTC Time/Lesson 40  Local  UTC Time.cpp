#pragma warning(disable : 4996)
#include <ctime>
#include <iostream>
using namespace std;
int main()
{
	
	time_t t = time(0); // get time now
	char* dt = ctime(&t); // convert in string form)
	cout << "Local date and time is: " << dt << endl;

	tm* gmtm = gmtime(&t);
	dt = asctime(gmtm);
	cout << "UTC data and time is:  " << dt << endl;

	return 0;

}