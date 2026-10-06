#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> vNumbers;
	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);

	if(vNumbers.empty())
	vNumbers.clear();

	cout << "First Elemnt : " << vNumbers.front() << endl;
	cout << "Last Elemnt  : " << vNumbers.back() << endl;

	cout << "Size         : " << vNumbers.size() << endl;

	cout << "Capacity     : " << vNumbers.capacity() << endl;

	cout << " Empty       : " << vNumbers.empty() << endl;

	return 0;

   
}

