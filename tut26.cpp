#include <iostream>
using namespace std;

class Complex
{
    //friend function ko public ya private kahi bhi likh skte hai
    //  friend Complex sumComplex (Complex o1,Complex o2);

    int a, b;

public:
    //Below line meanns that non member sumComplex function is allowed to do anything
    // with my private part(data)
    friend Complex sumComplex(Complex o1, Complex o2);
    /* Ishka Simple ye Mtlb hai ki "Complex" Class jo hai wo "sumComplex" function
    ka "friend" hai so wo private data of "Complex" ko use kr skta hai
     */

    void setNumber(int n, int m);
    void printNumber(void);
};

Complex sumComplex(Complex o1, Complex o2) //Complex return krega
{
    Complex o3;
    //cout<<a; //Inavalid
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

void Complex ::setNumber(int n, int m)
{
    a = n;
    b = m;
}

void Complex ::printNumber(void)
{
    cout << "The Complex Number is:" << a << " + " << b << "i" << endl;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 2);
    c1.printNumber();

    c2.setNumber(5, 6);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/* PROPERTIES OF FRIEND FUNCTION:

1.Not in the scope of class

2.Since it is not in the scope of class ,it cant be called from the object
  of that class i.e c1.sumComplex == Invalid.

3.Can be invoked without the help of Object.

4.Usually Contains the object as a arguments

5.Friend fun can be declare inside the public or private section of class
6.It cant access the menbers directly by their name and need object_name.member_name
 to access any member.  


*/