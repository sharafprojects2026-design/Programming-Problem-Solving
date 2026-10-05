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
string GenereteKey()
{
    string Key = "";
    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
    return Key;
}

void FillArrayWithKeys(string Arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        Arr[i] = GenereteKey();
    }

}

void PrintStringArray(string Arr[100], int arrLength)
{
    cout << " \nArrau elements:\n\n";
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Array[" << i << "] :";
        cout << Arr[i] << "\n";
    }
    cout << " \n";
}
int main()
{
    srand((unsigned)time(NULL));
    string Arr[100];
    int arrLength = 0;
    arrLength=ReadPositiveNumber("How Many Keys do you want to Generete?\n");
    FillArrayWithKeys(Arr, arrLength);
    PrintStringArray(Arr, arrLength);

    cout << "\nHello word";

    return 0;
}


