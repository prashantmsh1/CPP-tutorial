#include<iostream>
using namespace std;
int c=45; //global scope 
int main(){
    // int a,b,c;
    // cout<<"enter the value of a b "<<endl;
    // cin>>a>>b;
    // c=(a+b);
    // cout<<"sum is = "<<c<<endl;
    // cout<<"global c is = "<<::c<<endl; //global scope resolution
    float d=34.4f; //f or F
    long double e =34.4;
    // 34.4f will pass as float otherwise it will pass as double
    cout<<"the value of e is="<<e<<endl;
    cout<<"the value of d is="<<d<<endl;
    cout<<"size of d 34.4 is ="<<sizeof(d)<<endl;
    cout<<"size of d 34.4f is ="<<sizeof(34.4)<<endl;
    // reference variable 
    float x=5;
    float &y=x;
    cout<<"value of x "<<x<<endl;
    cout<<"value of y "<<y<<endl;
    // typcasting
    float f=34.67;
    float g=34;
    cout<<"value of f is "<<(float)f<<endl;
    cout<<"value of f is "<<(int)f<<endl;
    g=(int)f;
    cout<<"the sum of f and g="<<f+g<<endl;
    cout<<"the int sum of f and g="<<(int)f+g<<endl;
return 0;
}