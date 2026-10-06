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

int CountWords(string S1)
{
	int Count = 0;
	string Delim = " ";
	int  Pos = 0;
	string Wword;

	while ((Pos = S1.find(Delim))!= std::string::npos)
	{
		Wword = S1.substr(0, Pos);
		if (Wword != "")
		{
			Count++;
		}
		S1.erase(0, Pos + Delim.length());


	}
	if (S1 != "")
	{
		Count++;
	}
	return Count;
}

int main()
{

	string S1 = ReadString();

	cout << "The Number Of Words in Your String is:" << CountWords(S1);
	


	return 0;
}
