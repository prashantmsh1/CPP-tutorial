#include<iostream>
using namespace std;
// inline int product(int a,int b){ //inline function:-compiler replaces function call to fuction code
// return a*b;
// }
// inline int product(int a,int b){ 
//     static int c=0;
//     c=c+1;
// return a*b+c;
// }
float moneypro(int money,float factor=1.04)
{
    return money*factor;
}
int main(){
    // int a,b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"the sum is "<<product(a,b)<<endl; 
    int money=100000;
    cout<<"you will get "<<moneypro(money)<<"for your "<<money<<endl; 
    cout<<"If you are vip you will get "<<moneypro(money,1.10)<<"for your "<<money<<endl; 
    
return 0;
}