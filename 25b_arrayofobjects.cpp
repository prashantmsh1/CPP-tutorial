#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDatasum(complex o1, complex o2) //object is passed in the function
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printnumber(void){
        cout<<"your complex number is "<<a<<" +i"<<b<<endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setData(1,4);
    c1.printnumber();

    c2.setData(3,4);
    c2.printnumber();
    
    c3.setDatasum(c1,c2);
    c3.printnumber();
    return 0;
}