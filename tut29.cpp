#include <iostream>
using namespace std;

//Construct in C++

//Type 1. Default Constructor

class Complex
{
    int a, b;

public:
    //creating a Constructor
    //Constructor is a special member function with same name as the class.
    // It is used to intilze the objects of its class
    //it is automatically invoked whenever an object created

    Complex(void); //creating constructor

    void printData(void)
    {
        cout << "The Complex Number is: " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void)
{ // ------> This is Default constructor as it accepts no parameter
    a = 11;
    b = 22;
}

int main()
{
    Complex c1, c2, c3;
    c1.printData();
    c2.printData();
    c3.printData();

    return 0;
}

// Characteristics of Constuctor

/*
 1. It should be declare in the public section of class
 2. They are automatically invoked whenever the object is created  
 3. They cant return values ans they Dont have the return type
 4. It can have default arguments
 5. We cant refered  to their address
*/
