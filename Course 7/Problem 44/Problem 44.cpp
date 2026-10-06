
#include <iostream>
#include<cctype>
#include <string>
#include <vector>
using namespace std;

string RemovedPunctuationsFromString(string S1)
{
	string Result = "";
	
	for (char& C : S1)
	{
		if (!ispunct(C))
		{
			Result = Result + C;
		}
	}
	return Result;

}





int main()
{
	string S1 = "Welcome To jordan , jordan is a nice country .";
	cout << "Original String:\n" << S1 << endl;
	cout << "Punctuation Removed:\n " << RemovedPunctuationsFromString(S1) << endl;

	
}