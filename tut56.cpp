#include <iostream>
#include <algorithm>
using namespace std;

//Virtual Function

class BaseClass
{
public:
    int var_base = 1;
    virtual void display() // Ye line ko dhayan de
    {
        cout << " 1.Display base class var_base value " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "2.Display base class var_base value " << var_base << endl;
        cout << "2.Display derived class var_derived value " << var_derived << endl;
    }
};
int main()
{
    BaseClass *bass_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    bass_class_pointer = &obj_derived;
    bass_class_pointer->display();
    return 0;
}