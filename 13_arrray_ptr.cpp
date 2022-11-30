#include<iostream>
using namespace std;

int main(){
    int marks[4]={34,45,67,87};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"marks of "<<i<<"="<<marks[i]<<endl;
    }
    int* p=marks;
    for (int i = 0; i < 4; i++)
    {
        cout<<"the value of marks["<<i<<"] is="<<*(p+i)<<endl;
    }
    
return 0;
}