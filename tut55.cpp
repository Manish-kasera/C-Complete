#include <iostream>
#include <algorithm>
using namespace std;

//Pointer to Derived Classes

// base class ka pointer derived class ko point krega...

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Display base class var_base value " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Display base class var_base value " << var_base << endl;
        cout << "Display derived class var_derived value " << var_derived << endl;
    }
};

int main()
{
    // Case1. Base Class pointer to derived class

    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // pointer(bass class ka pointer) point to "derived"
                                       //ko kr rha hai but
                                       // function "derived" class ka nhi balki "base"
                                       // class ka hoga(i.e called Late Binding)
    base_class_pointer->var_base = 13;
    //base_class_pointer->var_Derived = 40;//will throw an error
    base_class_pointer->display();


    // Case2. Derived Class pointer to derived class

    DerivedClass *derived_class_pointer; 
    derived_class_pointer = &obj_derived;//derived class ke pointer  derived class object
                                         //  ko pint kr rha hai 
    derived_class_pointer->var_base = 220;
    derived_class_pointer->var_derived = 50;
    derived_class_pointer->display();


    // Case3. Derived class pointer to Base class

    //derived_class_pointer = &obj_base; // throw an error
    //derived class ke pointer se base class kO ASSIGN NHI KRA SKTE HAI
    return 0;
}