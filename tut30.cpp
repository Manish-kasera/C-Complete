#include <iostream>
using namespace std;

// Parametric Constructor

class Complex
{
    int a, b;

public:
    Complex(int, int);
    void printData(void)
    {
        cout << "The Complex no is:" << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // This is parametric Constructor as it takes two parameters
{
    a = x;
    b = y;
}

int main()
{
    Complex c1(1, 2); // Implicit Call
    c1.printData();
    Complex c2(10, 20);
    c2.printData();
    Complex c3(100, 200);
    c3.printData();

    cout << endl;
    Complex c4 = Complex(2, 1); // Expilict Call
    c4.printData();
    Complex c5 = Complex(20, 10);
    c5.printData();
    Complex c6 = Complex(200, 100);
    c6.printData();
    return 0;
}