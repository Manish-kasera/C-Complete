#include <iostream>
#include <algorithm>
using namespace std;

//  Derived(int a, int b,int c,int d) : Base1(a),Base2(b)
  //sbse important link jarur se smjhe  

/*
Case1.
  class A : public B{
    // Order of execution of constructor ----> B then A
  }; 

class A : public B : public C{
    // Order of execution of constructor ----> B then C then A
  }; 

class A : public B : virtual public C{
    // Order of execution of constructor  ------> firstly C then B then A
  }; 



*/

class Base1
{
    int data1;

public:
    Base1();
    Base1(int i)
    {
        data1 = i;
        cout << "In Base1 Class constructor" << endl;
    }
    void printDataBase1(void)
    {
        cout << "Data1 is:" << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2();
    Base2(int i)
    {
        data2 = i;
        cout << "In Base2 Class constructor" << endl;
    }
    void printDataBase2(void)
    {
        cout << "Data2 is:" << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b,int c,int d) : Base1(a),Base2(b) //Ish code ka sbse important line
   {
    derived1 = c;
    derived2 = d;
    cout<<"Derived class Constructor called"<<endl;
   }

    void printDataDerived(void)
    {
        cout << "Derived1 is:" << derived1 << endl;
        cout << "Derived2 is:" << derived2 << endl;
    }
};
int main()
{
    Derived d(1,2,3,4);
     d.printDataBase1();
     d.printDataBase2();
     d.printDataDerived();
    return 0;
}