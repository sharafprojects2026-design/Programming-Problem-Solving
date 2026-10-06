#include <iostream>
#include <string>
#include <cctype>
using namespace std;



string ReadString()
{
	string S1 = "";
	cout << "\nPlease enter Your string? " << endl;
	getline(cin, S1);
	return S1;
}

void PrintEachWordInString(string S1)
{
	string Delim = " ";
	int  Pos = 0;
	string Wword;
	while ((Pos = S1.find(Delim)) != std::string::npos)
	{
		Wword = S1.substr(0, Pos);

		if (Wword != " ")
		{
			cout << Wword << endl;
		}
		S1.erase(0, Pos + Delim.length());

	}
	
	if (S1 != " ")
	{
		cout << S1 << endl;
	}
}


int main()
{

	
	
	PrintEachWordInString(ReadString());
	

	return 0;
}
