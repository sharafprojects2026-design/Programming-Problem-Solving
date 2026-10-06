#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream MyFile;

	MyFile.open("MyFile.txt",ios::out| ios::app);

	if (MyFile.is_open())
	{
		MyFile << "My Name is Sharaf\n";
		MyFile << "I am From Yemen\n";
		MyFile << "Hi My Friend, How are you? \n";
		MyFile.close();
	}
	return 0;
}

