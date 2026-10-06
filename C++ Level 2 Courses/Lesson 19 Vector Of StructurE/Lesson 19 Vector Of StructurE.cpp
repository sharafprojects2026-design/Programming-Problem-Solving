#include <iostream>
#include <vector>
using namespace std;

struct stEmployees
{
    string FirstName = " ";
    string LastName = " ";
    long Salary = 0;
};

void ReadEmployee(vector <stEmployees>& vEmployees)
{
    stEmployees EmptEmployees;
    char MorEmp = 'Y';
    while (MorEmp == 'Y' || MorEmp == 'y')
    {
        
        cout << "Enter First Name? ";
        cin >> EmptEmployees.FirstName;
        cout << " Enter Last Name: ";
        cin >> EmptEmployees.LastName;
        cout << "Enter Salary: ";
        cin >> EmptEmployees.Salary;
        vEmployees.push_back(EmptEmployees);

        cout << "Do You Want To Read More Employee?Y/N ?";
        cin >> MorEmp;

    }
}

void PrintEmployees(vector <stEmployees>& vEmployees)
{
    for (stEmployees& Employee : vEmployees)
    {
        cout << endl;
        cout << "First Name : " << Employee.FirstName << endl;
        cout << "Last Name  : " << Employee.LastName << endl;
        cout << "Salary     : " << Employee.Salary << endl;

    }


}


int main()
{
    vector <stEmployees> vEmployees;

    ReadEmployee(vEmployees);
    PrintEmployees(vEmployees);
   

    return 0;

}

