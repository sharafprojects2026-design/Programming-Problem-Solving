#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void PrintContentFile(string NameFile)
{
    fstream MyFile;
    MyFile.open(NameFile, ios::in);

    if (MyFile.is_open())
    {
        string line;
        while (getline(MyFile, line))
        {
            cout << line << endl;
        }
        MyFile.close();
    }
}

int main()
{
    PrintContentFile("MyFile.txt");
    return 0;
    
}

