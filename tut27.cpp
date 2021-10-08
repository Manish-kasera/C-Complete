#include <iostream>
using namespace std;

//Friend Classes and Member Friend Function

class Complex; //Forward Decleration

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(Complex o1, Complex o2);
    int sumCompComplex(Complex o1, Complex o2);
};

class Complex
{
    //Ek calss ke function ko dusre Class ka Friend bnye hai

    //Individual/y declaring  Functions as Friend
    // friend int Calculator ::sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator ::sumCompComplex(Complex o1, Complex o2);
    int a, b;

    //Alt: Declaring entire Class (calculator) as aa friend
    friend class Calculator; //Best hai Yr //friend Class

public:
    void setNumber(int n, int m)
    {
        a = n;
        b = m;
    }
    void printNumber(void)
    {
        cout << "The Complex Number is:" << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 2);
    o1.printNumber();

    o2.setNumber(3, 4);
    o2.printNumber();

    Calculator calc;

    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of the real part of o1 and o2 is :" << res << endl;

    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of the complex part of o1 and o2 is :" << resc;

    return 0;
}