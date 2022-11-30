#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 150;
        cout << "enter id of employee" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "the id of employee is " << id << endl;
    }
};
int main()
{
    // Employee prashant,lalit,parth,pallavi;
    // prashant.setId();
    // prashant.getId();
    Employee meta[5];
    for (int i = 0; i < 4; i++)
    {
        meta[i].setId();
        meta[i].getId();
    }

    return 0;
}