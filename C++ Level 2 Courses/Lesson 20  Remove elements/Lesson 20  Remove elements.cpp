#include <iostream>
#include <vector >

using namespace std;


int main()
{
	vector <int> vNumber;
	vNumber.push_back(20);
	vNumber.push_back(30);
	vNumber.push_back(40);
	vNumber.push_back(50);

	
	vNumber.pop_back();
	vNumber.pop_back();
	vNumber.pop_back();
	vNumber.pop_back();
	for (int &i : vNumber)
	{
		
		cout << i << endl;
	}
	return 0;

}

