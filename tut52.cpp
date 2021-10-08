#include <iostream>
#include <algorithm>
using namespace std;

//Array of Objects

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is :" << id << endl;
        cout << "Price of this item  is :" << price << endl;
    }
};

int main()
{
    int size = 3;
    //int *ptr = &size; // Compare kr lo niche se
    /*
       1.General Store item
       2.Veggies item
       3.Mobile Store item
    */
    ShopItem *ptr = new ShopItem[size]; // Yahi to Important hai
    ShopItem *ptrTemp = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the id and price of " << i + 1 << "nd item" << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}