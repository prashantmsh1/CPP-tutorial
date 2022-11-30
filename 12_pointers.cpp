#include<iostream>
using namespace std;

int main(){
    int a=3;
    int* b=&a;
    cout<<b<<endl;
    cout<<&a<<endl;

    cout<<"the value at a is "<<*b<<endl;

    //pointer to pointer
  
    int** c=&b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the value at address of c is "<<*c<<endl;
    cout<<"the value at(value at) address of c is "<<**c<<endl;

return 0;
}