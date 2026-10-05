#include <iostream >
using namespace std;

void PrintHeadr()
{
	cout << "\n\n\t\t Multiplication Table from 1 to 10 \n\n";

	for (int i = 1; i <= 10; i++)
	{
		cout << i << " \t ";
	}
	cout << "\n-------------------------------------------------------------------------------------\n";
}

string Colmon(int i)
{
	if (i < 10)
		return "    |";
	else
		return "   |";
}

void MultiplicationTableHeader()
{
	PrintHeadr();

	for (int i = 1; i <= 10; i++)
	{
		cout << i << Colmon(i) << " \t";
		for (int j = 1; j <= 10; j++)
		{
			cout << j * i << " \t";

		}
		cout << endl;
	}
}
int main()
{

	MultiplicationTableHeader();
	return 0;

}