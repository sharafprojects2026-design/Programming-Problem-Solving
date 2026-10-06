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
string UpperFirstLetterOfEachWord(string S1)
{
    bool FirstLetter = true;

    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ' && FirstLetter)
        {
             
            S1[i] = toupper(S1[i]);
      
        }
        FirstLetter = (S1[i] == ' ' ? true : false);
    }
    return S1;

}
int main()
{
    string S1 = ReadString(); 
    S1 = UpperFirstLetterOfEachWord(S1);

    cout << "\n String After Conversion.\n";

    cout << S1 << endl;
    return 0;
   
}
