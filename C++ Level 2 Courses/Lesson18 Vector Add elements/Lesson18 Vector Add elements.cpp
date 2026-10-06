#include <iostream>
#include <vector>
using namespace std;
int ReadNumber()
{
	int Number;
	cout << "Pleas enter a Number? " << endl;
	cin >> Number;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits < std::streamsize > ::max(),'\n');

		cout << "Invalid Number,Enter  a Valid one : " << endl;
		cin >> Number;
	}
	return Number;
}


void ReadVectorNumbers(vector<int>& vNumbers)
{
	char MoreRead = 'Y';
	

	while (MoreRead == 'Y' || MoreRead == 'y')
	{
		vNumbers.push_back(ReadNumber());
		cout << " Do You Want To More Number?Y/N ";
		cin >> MoreRead;

	}
}

void PrintVectorNumbers(vector<int> &vNumbers)
{

	cout << "Vectore Number: \n\n";
	for (int &i : vNumbers)
	{
		cout << i << endl;
	}

}

int main()
{
	vector <int> vAddNumbers;
	ReadVectorNumbers(vAddNumbers);
	PrintVectorNumbers(vAddNumbers);

	system("color 4f");
	

	
	return 0;
	
	
}
