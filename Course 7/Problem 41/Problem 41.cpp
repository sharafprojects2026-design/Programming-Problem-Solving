#include <iostream>
#include <vector>
#include <string>
using namespace std;
string Readstring()
{
	string S1 = "";
	cout << "Please enter Your String: " << endl;
	getline(cin, S1);
	return S1;
}

vector <string> SplitString(string S1, string Delim)
{
	vector <string> vString;
	int Pos = 0;
	string Wword;
	Delim = " ";
	while ((Pos = S1.find(Delim)) != std::string::npos)
	{
		Wword = S1.substr(0, Pos);

		if (Wword != "")
		{
			vString.push_back(Wword);
		}
		S1.erase(0, Pos + Delim.length());

	}
	if (S1 != "")
	{
		vString.push_back(S1);
	}
	return vString;

}
string ReverseWordsInString(string S1, string Delim)
{
	vector <string> vString;
	string S2 = "";
	vString = SplitString(S1, Delim);
	vector<string> ::iterator Iter = vString.end();

	while (Iter != vString.begin())
	{
		Iter--;

		S2 = S2 + *Iter + Delim;
	}
	S2 = S2.substr(0, S2.length() - Delim.length());
	return S2;

}


int main()
{
	vector<string> vString; 
	string S1 = Readstring();

	cout << "\nString after Reversing Words:\n";

	S1 = ReverseWordsInString(S1, " ");

	cout << S1 << endl; 
}