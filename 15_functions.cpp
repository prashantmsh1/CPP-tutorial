#include<iostream>
using namespace std;
int sum(int a,int b){
    int c=a+b;
    return c;
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int num=sum(a,b);
    cout<<num<<endl;
return 0;
}