#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString()
{
    string S1 = " ";

    cout << "Please enter Your String? " << endl;
    getline(cin, S1);
    return S1;
}
string LowerFirstLetterOfEachWord(string S1)
{
    bool isFirstLetter = true;

    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ' && isFirstLetter)
        {

            S1[i] = tolower(S1[i]);

        }
        isFirstLetter = (S1[i] == ' ' ? true : false);
    }
    return S1;

}
int main()
{
    string S1 = ReadString();
    S1 = LowerFirstLetterOfEachWord(S1);

    cout << "\nString After Conversion.\n";

    cout << S1 << endl;
    return 0;

}
