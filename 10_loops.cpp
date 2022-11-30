#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<i<<endl;
    // }
    int i=0;
    while (i<40)
    {
     cout<<i<<endl;
     i++;
    }

    do
    {
        cout<<i<<endl;
        i++;
    } while (i<40);
    int t=1;
    do
    {
        int mult=6*t;
        cout<<mult<<endl;
        t++;
    } while (t<=10);
    
    
return 0;
}