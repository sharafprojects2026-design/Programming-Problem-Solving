#include <iostream>
using namespace std;
void PrintNumber(int N, int M)
{
	if (N <= M)
	{
		PrintNumber(N + 1, M);
		cout << N << endl;
		PrintNumber(N + 1, M);
	}
}

int main()
{
	PrintNumber(1, 20);
}

