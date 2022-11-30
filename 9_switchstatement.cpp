#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "tell me your age " << endl;
    cin >> age;
    if (age < 18)
    {
        cout << "you can not come to my party" << endl;
    }
    else if (age == 18)
    {
        cout << "you are a kid" << endl;
    }
    else
        cout << "enjoy the party" << endl;

    switch (age)
    {
    case 18:
        cout << "you are 18";
        break;
    case 22:
        cout << "you are 22";
        break;
    case 2:
        cout << "you are 2";
        break;

    default:
        cout << "no special cases";
        break;
    }

    return 0;
}