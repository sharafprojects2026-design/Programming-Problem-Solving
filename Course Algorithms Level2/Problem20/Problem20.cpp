#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;

   
}

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharcter = 3, Digit = 4 };

char GetRandomCharcter(enCharType CharType)
{
    switch (CharType)
    {
    case  enCharType::SmallLetter:
    {
        return char(RandomNumber(97, 122));
        break;
    }
    case enCharType::CapitalLetter:
    {
        return char(RandomNumber(65, 90));
        break;
    }
    case enCharType::SpecialCharcter:
    {
        return char(RandomNumber(33, 47));
        break;
    }
    case enCharType::Digit:
        return char(RandomNumber(48, 57));
        break;


    }
}


int main()
{
    srand((unsigned)time(NULL));

    cout << GetRandomCharcter(enCharType::SmallLetter) << endl;
    cout << GetRandomCharcter(enCharType::CapitalLetter) << endl;
    cout << GetRandomCharcter(enCharType::SpecialCharcter) << endl;
    cout << GetRandomCharcter(enCharType::Digit) << endl;

    return 0;

}
