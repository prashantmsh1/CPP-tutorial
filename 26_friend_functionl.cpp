#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
        //below function can be used to acces private class elements
        friend Complex sumComplex(Complex o1,Complex o2);
        void setNumber(int n1,int n2){
            a=n1;
            b=n2;
        }
        void printNumber(){
            cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
        }
};
Complex sumComplex(Complex o1, Complex o2){
   Complex o3;
   o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
   return o3;
}
int main(){
    Complex c1,c2,sum;
    c1.setNumber(23,34);
    c1.printNumber();

    c2.setNumber(34,56);
    c2.printNumber();

    sum=sumComplex(c1,c2);
    sum.printNumber();
return 0;
}
/*properties of friend function
1. not in the scope of class
2. since its not in the scope of class it cannot be allowed to be called by the object of the class c1.sumComplex=>invlid
3.can be invoked without the help of any object
4.usually containes object as arguments
5.can be declared in the public or private section of the class
6.It cannot directly acces the members directly by their name and need object_name.membername to access any member
*/