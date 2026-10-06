#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
    string S1 = " ";

    cout << "Please enter Your String? " << endl;
    getline(cin, S1);
    return S1;
}
void PrintFirstLetterOfEachWord(string S1)
{
    bool FirstLetter = true;
   
    cout << "\n First Letters Of This String: \n";
    for (int i = 0; i <= S1.length(); i++)
    {
        if (S1[i] != ' ' && FirstLetter)
        {
            cout << S1[i] << endl;
        }
        FirstLetter = (S1[i] == ' ' ? true : false);
   }


}
int main()
{
    PrintFirstLetterOfEachWord(ReadString());
    
}
