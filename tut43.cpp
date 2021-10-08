#include <iostream>
using namespace std;

//Ambiguity Resolution

class Base1
{
public:
    void greet()
    {
        cout << "How are you ?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise Ho ?" << endl;
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello World!" << endl;
    }
};

class D : public B
{
private:
    int x;
  // D's new say() method will overwrite base class say() method
public:
    void say()
    {
        cout << "Hello  My Beautiful People" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int x;

public:
    void greet()
    {
        Base1::greet(); // (Ambiguity Resolution)// Base2 ke greet() ko use kr rhe hai Derived class Me
    }
};

int main()
{

    //Ambiguity 1
    // Base1 base1obj;
    // Base2 base2obj;

    // base1obj.greet();
    // base2obj.greet();

    // Derived d;
    // d.greet();


    //Ambiguity  2 
    B b;
    D d;
    d.say();

    return 0;
}