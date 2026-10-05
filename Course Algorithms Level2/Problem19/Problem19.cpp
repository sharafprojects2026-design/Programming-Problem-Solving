#include <iostream>
#include <cstdlib>

using namespace std;
int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}

int main()
{
    srand((unsigned)time(NULL));
    cout << RandomNumber(1000, 2000) << endl;
    cout << RandomNumber(0, 2) << endl;
    return 0;
}

