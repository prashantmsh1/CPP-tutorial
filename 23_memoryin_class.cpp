#include <iostream>
using namespace std;
class shop
{
private:
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void getPrice(void);
    void displayPrice(void);
};
void shop::getPrice(void)
{
    cout << "enter id of your item number " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "enter the item price" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initCounter();
    dukaan.getPrice();
    dukaan.getPrice();
    dukaan.getPrice();
    dukaan.displayPrice();

    return 0;
}