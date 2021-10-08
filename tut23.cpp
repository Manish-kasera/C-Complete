#include <iostream>
using namespace std;


// object Memory Allocation & Using array In Class

class Shop
{

    int itemId[5];
    int itemPrice[5];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{

    cout << "Write the item Id and  Its price :";

    cin >> itemId[counter];
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{

    for (int i = 0; i < counter; i++)
    {
        cout << "Item Id is:" << itemId[i] << " "
             << "Item Price is:" << itemPrice[i] << endl;
    }
}

int main()
{
    Shop s1;
    s1.initCounter();
    s1.setPrice();
    s1.setPrice();
    cout << endl; //for Readibility
    s1.displayPrice();
    return 0;
}