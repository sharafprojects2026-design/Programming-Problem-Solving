#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
void PrintInvertedPattern(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        for (int j = 0 ; j < i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    PrintInvertedPattern(ReadPositiveNumber("Please enter A Number"));
    return 0;
}

