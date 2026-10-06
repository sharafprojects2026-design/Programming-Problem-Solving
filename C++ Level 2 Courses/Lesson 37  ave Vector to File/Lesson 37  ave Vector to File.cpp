#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
	fstream MyFile;
	MyFile.open("Ali.text", ios::out)

		if (MyFile.is_open())
		{
			MyFile << "Hi i am Sharaf \n";
			MyFile << "I am From Sharaf\n";
			MyFile << "I am Muslem\n";

			MyFile.close();
		}
}
