#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a=34;
//     cout<<"the value of a was"<<a<<endl;

//     // a=45;
//     cout<<"now value of a is: "<<a<<endl;
//     //constants in cpp
//    // const int c=3; //can also be made float
//     cout<<"value of c: "<<c<<endl;

    // c=56;
    //     cout<<"value of c: "<<c<<endl;
    int a=5,b=45,c=34;
    cout<<"the value of without setw(4) a is: "<<a<<endl;
    cout<<"the value of without setw(4) b is: "<<b<<endl;
    cout<<"the value of without setw(4) c is: "<<c<<endl;
 
    cout<<"the value of a is: "<<setw(4)<<a<<endl;
    cout<<"the value of b is: "<<setw(4)<<b<<endl;
    cout<<"the value of c is: "<<setw(4)<<c<<endl;


    //operator precedence
    int x=5,y=4;
    int f=(2*x)+y;

   

return 0;
}