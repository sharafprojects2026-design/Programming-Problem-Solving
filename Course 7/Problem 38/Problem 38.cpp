#include <iostream>
#include <string>
using namespace std;



 string TirmLeft(string S1)
{
	 for (int i = 0; i < S1.length(); i++)
	 {
		 if (S1[i] != ' ')
		 {
			 return S1.substr(0, S1.length() - i);
		 }
	 }
	 return "";
	

}
 string TirmRight(string S1)
 {
	 for (int i = S1.length() - 1; i >= 0; i--)
	 {
		 if (S1[i] != ' ')
		 {
			 return S1.substr(0, i + 1);
		 }

	 }
	 return " ";
	 
 }
 string Tirm(string S1)
 {
	 return TirmLeft(TirmRight(S1));
	
 }

int main()
{
	

	string S1 = "     Programming Advice Wecome     ";

	cout << " String     =  " << S1 << endl;
	cout << " Tirm Left  =  " << TirmLeft(S1) << endl;
	cout << " Tirm Right =  " << TirmRight(S1) << endl;
	cout << " Tirm       =  " << Tirm(S1) << endl;


	return 0;
}
