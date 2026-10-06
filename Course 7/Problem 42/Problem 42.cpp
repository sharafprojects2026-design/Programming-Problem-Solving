#include <iostream>
#include <vector>
#include <string>
using namespace std;

string ReplaceWord(string S1, string StringToReplace, string ReplaceTo)
{
	int Pos = S1.find(StringToReplace);

	while (Pos  != std::string::npos)
	{
		S1.replace(Pos, StringToReplace.length(), ReplaceTo);
		Pos =S1.find(StringToReplace);
	}
	return S1;
}

int main()
{
	string S1 = "Welcome To Jordan , Jordan is a nice country.";
	cout << "Origial String:\n"<<S1<< endl;
	string StringToReplace = "Jordan";
	string ReplaceTo = "USA";

	cout << "\nString After Replace:\n" << ReplaceWord(S1, StringToReplace,ReplaceTo);
	
}