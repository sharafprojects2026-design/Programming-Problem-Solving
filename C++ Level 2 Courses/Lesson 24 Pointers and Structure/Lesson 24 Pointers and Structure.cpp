#include <iostream>
using namespace std;
struct stEmployees
{
    string Name;
    int Salary;
};

int main()
{
    stEmployees Employees, * ptr;

    Employees.Name = "Sharaf Abdu-Ltef";
    Employees.Salary = 5000;

    cout << Employees.Name << endl;
    cout << Employees.Salary << endl;

    cout << "\n Using Pointer : " << endl;
    ptr = &Employees;

    cout  << "Name  : " << ptr->Name << endl;
    cout  << "Salary: " << ptr->Salary << endl;

    return  0;
    
}

