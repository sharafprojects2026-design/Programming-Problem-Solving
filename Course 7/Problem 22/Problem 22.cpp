
#include <iostream>
using namespace std;


void PrintFibonacciUsingRecursion(int Number,int Prev1,int Preve2)
{
	int FibNumber = 0;
	
	if (Number > 0)
	{
		FibNumber = Prev1 + Preve2;
		Preve2 = Prev1;
		Prev1 = FibNumber;
		cout << FibNumber << "   ";

		PrintFibonacciUsingRecursion(Number - 1, Prev1, Preve2);
		
	}
}

int main()
{
	PrintFibonacciUsingRecursion(9,1,0);
}
