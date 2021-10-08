#include <iostream>
using namespace std;

/*Syntax for mutiple Inheritance
class derivedClass :access_mode base1,access_mode base2{

};

*/

class Base1
{
protected:
    int base1int;

public:
    void setData1(int x)
    {
        base1int = x;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void setData2(int y)
    {
        base2int = y;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of base1 is:" << base1int << endl;
        cout << "The value of base1 is:" << base2int << endl;
        cout << "The sum of base1 and base2 is:" << (base1int + base2int) << endl;
    }
};

/*
 The inherited derive class will look like this
  Data Members:
     base1int---> protected
     base2int---> protected
  Member Function:
      setData1()---> public
      setData2()---> public    
      show() ------> public
*/

int main()
{
    Derived harry;
    harry.setData1(10);
    harry.setData2(20);
    harry.show();
    return 0;
}