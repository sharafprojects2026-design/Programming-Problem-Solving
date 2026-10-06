#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector <int> num{ 1,2,3,4,5 };

	cout << num.at(3) << endl;

	try
	{
		cout << num.at(5) << endl;

		
	}
	catch(...)
	{
		cout << " out Of bound \n";
	}
}

