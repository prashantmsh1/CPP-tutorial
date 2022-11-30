#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << a << b << endl;
}
void swapptr(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << *a << *b << endl;
}
//call by reference using c++ reference variable
void swapreference(int &a,int &b){
// int & swapreference(int &a,int &b){ int & gives a pointer to the function
 int temp = a;
    a = b;
    b = temp;
    cout << a << b << endl;
 
}

int main()
{
    int a = 4, b = 5;
    cout << "the sum of 4 and 5 is " << sum(a, b) << endl;
    cout << a << b << endl;
    // swapptr(&a, &b);
    swapreference(a, b); //this will swap using refernce variable
    // swapreference(a, b)=77; //
    return 0;
}