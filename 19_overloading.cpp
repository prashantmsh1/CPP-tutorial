#include <iostream>
using namespace std;
int add(int a, int b)
{
    cout << "function using 2 arguments" << endl;
    return a + b;
}
int add(int a, int b, int c)
{
    cout << "function using 2 arguments" << endl;
    return a + b + c;
}
int volume(int r, int h)
{
    return (3.14 * (r * r) * h);
}
int volume(int a)
{ // volume of a cube
    return a * a * a;
}
int volume(int l, int b, int h)
{
    // volume of a rectangle
    return l * b * h;
}
int main()
{
    cout << "the sum of 3 and 6 is " << add(3, 6) << endl;
    cout << "the sum of 3,7 and 6 is " << add(3, 6, 7) << endl;
    cout << "the volume of cuboid 3,7 and 6 is " << volume(3, 6, 7) << endl;
    cout << "the volume of cylinder 3 and 6 is " << volume(3, 6) << endl;
    cout << "the volume of cube 3 is " <<volume(3) << endl;

    return 0;
}