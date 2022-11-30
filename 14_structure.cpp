#include <iostream>
using namespace std;
typedef struct employee
{
    int id;
    char favChar;
    float salary;
} ep; //by using typedef we can give custom variable to a structur
    union money
    {
        int rice;
        char car;
        float salary;
    };
int main()
{
    ep prashant;
    ep shubham;
    ep danish;
    prashant.id = 1;
    prashant.favChar = 'S';
    prashant.salary = 12000000;
    cout << "the value of " << prashant.salary << endl;
    cout << "the value of " << prashant.id << endl;
    cout << "the value of " << prashant.favChar << endl;
    union money m1;
    m1.rice=34;
    m1.car='c';
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;
    enum meal{breakfast,lunch,dinner};
    meal m2=breakfast;
    cout<<m2;
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
    return 0;
}