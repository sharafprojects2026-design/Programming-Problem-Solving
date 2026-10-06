#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	
	cout << "Please total number of student: ";
	cin >> num;

	
	int* ptr;
	ptr = new int[num];

	cout << "\n Enter Grade of Student." << endl;
	for (int i = 0; i < num; i++)
	{
		do
		{
			cout << "Student " << i + 1 << ": ";
			cin >> *(ptr + i);

			if (*(ptr + i) < 0 || *(ptr + i) > 100)
			{
				cout << "Invalid grade! Enter again (0 - 100)\n";
			}

		} while (*(ptr + i) < 0 || *(ptr + i) > 100);
	}


	cout << "\ndisplaying Gradesof student. " << endl;

	for (int i = 0; i < num; i++)
	{
		
		cout << "student " << i + 1 << ":" << *(ptr + i) << endl;

		
	}
	delete[]ptr;
	
}
