#include <iostream>
#include <algorithm>
using namespace std;

//Pointers(*) to object and Arrow operator(->)

class Complex
{
    int real, imaginery;

public:
    void getData(void)
    {
        cout << "The real part is:" << real << endl;
        cout << "The imaginery part is:" << imaginery << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginery = b;
    }
};

int main()
{
    Complex c1;
    Complex *ptr = &c1; //ptr pointing to object c1 (class Complex)
                        //Complex *ptr = new Complex; // ye bhi sahi hai

    //(*ptr).setData(11,33); // is exactly same as
    ptr->setData(1111, 223); //Arrow Operator // ptr pointer ko dereference karo aur isha setData() run karo

    //(*ptr).getData(); // is as good as
    ptr->getData();

    //Array of Objects
    Complex *ptr1 = new Complex[3]; // ye bhi sahi hai
    ptr1->setData(18, 2);
    ptr1->getData();

    return 0;
}