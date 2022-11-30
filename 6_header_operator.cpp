#include<iostream>
using namespace std;
//#include<this.h> //this is will produce an error if not present in current directory

int main(){
    int a=10 , b=5;
    cout<<"operator in c++"<<endl;
    cout<<"following are the operators in c++"<<endl;
    cout<<"the value of a+b "<<a+b<<endl;
    cout<<"the value of a-b "<<a-b<<endl;
    cout<<"the value of a*b "<<a*b<<endl;
    cout<<"the value of a/b "<<a/b<<endl;
    cout<<"the value of a%b "<<a%b<<endl;
    cout<<"the value of a-- "<<a--<<endl;
    cout<<"the value of a++ "<<a++<<endl;
    cout<<"the value of --a "<<--a<<endl;

    //comparison operator
     cout<<"the value of a==b "<<(a==b)<<endl;
     cout<<"the value of a>b "<<(a>b)<<endl;
     cout<<"the value of a<b "<<(a<b)<<endl;
     cout<<"the value of a<=b "<<(a<=b)<<endl;
     cout<<"the value of a!=b "<<(a!=b)<<endl;
     //logical operator are same as c
return 0;
} 