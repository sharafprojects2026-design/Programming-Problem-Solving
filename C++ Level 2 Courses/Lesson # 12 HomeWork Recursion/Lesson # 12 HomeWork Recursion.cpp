#include <iostream>
using namespace std;
void PrintOddEven(int );


int main()
{
	PrintOddEven(5);
	return 0;
}

void PrintOddEven(int N)
{
	if (N == 0)
	
		return;
		if (N % 2 == 0)

			cout << N << endl;
		PrintOddEven(N - 1);
		if (N % 2 != 0)
			cout << N << endl;
		
	
}