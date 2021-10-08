#include <iostream>
using namespace std;

//passing object as function

class Complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2);

    void setDataBySum(Complex o1, Complex o2); // ye important hai

    void printNumber(void);
};

void Complex ::setData(int v1, int v2)
{
    a = v1;
    b = v2;
}

void Complex :: setDataBySum(Complex o1, Complex o2) // ye important hai
{

    a = o1.a + o2.a;
    b = o1.b + o2.b;
    // printNumber();
}

void Complex ::printNumber(void)
{
    cout << "The Complex number is " << a << "+" << b << "i" << endl;
}

int main()
{

    Complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();

    return 0;
}