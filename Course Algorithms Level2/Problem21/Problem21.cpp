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
    } while (Number < 0);
    return Number;
}
enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialLetter = 3, Digit = 4 };


int RandumNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}

char GetRandomChar(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::CapitalLetter:
    {
        return char(RandumNumber(65, 90));
        break;
    }
    case enCharType::SmallLetter:
    {
        return char(RandumNumber(97, 127));
        break;
    }
    case enCharType::SpecialLetter:
    {
        return char(RandumNumber(33, 47));
        break;
    }
    case enCharType::Digit:
    {
        return char(RandumNumber(48, 57));
        break;
    }


    }
}
string GenerateWord(enCharType CharType, short Lengith)
{  
    string word = "";
    for (int i = 1; i <= Lengith; i++)
    {
        word = word + GetRandomChar(CharType);
    }
    return word;
}
string GenereteKey( )
{
    string Key = "";
    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
    return Key;
}
void GenrateKeys(int NumberOfKyes)
{
    for (int i = 1; i <= NumberOfKyes; i++)
    {
        cout << " Key [" << i << "[ :";
        cout << GenereteKey() << endl;
    }
}
int main()
{

    GenrateKeys(ReadPositiveNumber("Please enter How Many Keys to Genrete "));

    return 0;
}


