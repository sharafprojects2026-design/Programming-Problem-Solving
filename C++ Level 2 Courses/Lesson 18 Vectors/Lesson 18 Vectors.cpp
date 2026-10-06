#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector <int> vNumber = { 20,30,40,50 };
    for (int& i : vNumber)
    {
        cout << i << " ";
    }
    
    
}

