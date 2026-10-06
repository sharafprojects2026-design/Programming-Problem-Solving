#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> num = { 20,30,40,50,60 };
    cout << "\n\n using .at(i) \n ";
    cout << "Element at Index 0: " << num.at(0) << endl;
    cout << "Element at Index 1: " << num.at(1) << endl;
    cout << "Element at Index 2: " << num.at(2) << endl;
    cout << "Elment  at Index 4: " << num.at(4) << endl;
    cout << "\n \n Using [i]\n";
    cout << "Element at Index 0: " << num[0] << endl;
    cout << "Element at Index 1: " << num[2] << endl;
    cout << "Element at Index 2: " << num[4] << endl;

    return 0;

}
