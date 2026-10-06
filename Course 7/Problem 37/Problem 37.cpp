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

vector <string> SplitString(string S1,string Delim)
{
	
	vector <string> vSplit;
	int  Pos = 0;
	string Wword;

	while ((Pos = S1.find(Delim)) != std::string::npos)
	{
		Wword = S1.substr(0, Pos);
		if (Wword != "")
		{
			vSplit.push_back(Wword);
		}
		S1.erase(0, Pos + Delim.length());
	}
	if (S1 != "")
	{
		vSplit.push_back(S1);
	}
	return vSplit;
	
}

void PrintVector( vector <string> &vSplit)
{
	
	for (string &i : vSplit)
	{
		cout << i << endl;

	}

}

int main()
{
	vector <string> vString;
	
	string S1 = "Mohammed,Ali,Sharaf";
	//cout << "\nTokens = " << CountWord(S1) << endl;
	vString= SplitString(S1, ",") ;
	cout << "Tokens: " << vString.size() << endl;
	PrintVector( vString);


	return 0;
}
