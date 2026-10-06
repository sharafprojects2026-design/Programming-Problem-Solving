#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;


string ReadString()
{
	string S1 = "";
	cout << "\nPlease enter Your string? " << endl;
	getline(cin, S1);
	return S1;
}

string JoinString(vector <string> vString, string Delim)
{
	string S1 = "";

	for (string& s : vString)
	{
		S1 = S1 + s + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());

	
}



int main()
{
	vector <string> vString = { "Mohammed","Ftah","Sharaf" };

	string S1;
	//cout << "\nTokens = " << CountWord(S1) << endl;
	cout << "Vectro After Join: " << endl;

	cout << JoinString(vString, "@@@@");
	


	return 0;
}
