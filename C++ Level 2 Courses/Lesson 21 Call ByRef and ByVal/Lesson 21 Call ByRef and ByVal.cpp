#include <iostream>
using namespace std;
/*void Function1(int x) by value
{
	++x;
	
	
}
*/
void Function1(int& x) // by references
{
	++x;
	cout << x << endl;
	cout << &x << endl;
	
	
}

int main()
{
	int a = 10;
	cout << a << endl;
	Function1(a);
	
	cout <<  &a << endl;
	

	/*int a = 10; gain more Understanding
	int& x = a;
	cout << &a << endl;
	cout << &x << endl;
	cout << endl;
	cout << a << endl;
	cout << x << endl;
	*/
	return 0;
   
}

