#include <iostream>
#include <vector>
using namespace std;
string JoinString(vector <string>vString, string Delim)
{
	string S1 = "";
	for (string& s : vString)
	{
		S1 = S1 + s + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}

string  JoinString(string Arr[100], int Length, string Delim)
{
	string S1 = "";
	for (int i = 0; i < Length; i++)
	{
		S1 = S1 + Arr[i] + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());

	

}
int main()
{
	vector <string> vString = { "Mohammed","Sharaf","Ahmed" };
	string Arr[] = { "Ossama","Sharaf","Mohammd","Ftah" };
	cout << "Vector After Join: \n";
	cout << JoinString(vString, " ");

	cout << "\nArray After Join: \n";
	cout << JoinString(Arr, 4, " ") << endl;


}