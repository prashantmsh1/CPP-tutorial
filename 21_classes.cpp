#include<iostream>
using namespace std;
class Employee
{
    private:
        int a,b,c;

    public:
    int e,d; 
    void setData(int a1,int b1,int c1); //declaratiion
    void getData(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
    }
    
};
void Employee:: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    Employee Prashant;
    // Prashant.a=34 this is private
    Prashant.e=45;
    Prashant.d=34;
    Prashant.setData(1,2,3);
    Prashant.getData();
    
return 0;
}