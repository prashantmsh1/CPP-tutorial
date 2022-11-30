#include<iostream>
using namespace std;
class Employee{
    int id;
    static int count;
    public:
        void setData(void){
            cout<<"enter the id"<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"the id of employee is "<<id<<" and this is employee number count"<<count<<endl;
        }
        static void getCount(void){ //static function declaration
            cout<<"the value of count is "<<count<<endl; // can only access static members of a class
        }
};
int Employee:: count; //static variable is defined outside the class default value is 0
int main(){
    Employee prashant,danish,lalit;
    // prashant.id; cannot do this as these are private
    // prashant.count;
    prashant.setData();
    prashant.getData();
    Employee::getCount();
    danish.setData();
    danish.getData();

    lalit.setData();
    lalit.getData();
    lalit.getCount();
return 0;
}