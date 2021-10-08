#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    } // Default Constructor
    Number(int num)
    {
        a = num;
    }

    //Copy Constructor
    //When no copy constructor is found,compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "copy constructor is called:" << endl;
        a = obj.a;
    }
    void printData(void)
    {
        cout << "The Number is:" << a << endl;
    }
};

int main()
{
    Number x, y, z(11), z2;
    x.printData();
    y.printData();
    z.printData();
    Number z1(x); // copy constructor invoked
    z1.printData();
    z2 = z; //copy constructor dont not invoked
    z2.printData();
    Number z3 = z; // copy Constructor invoked
    z3.printData();
    return 0;
}