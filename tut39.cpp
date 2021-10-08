#include <iostream>
using namespace std;

// Protected access_modifier

class Base
{
protected:  // It is just like private but it can be inherit
    int a;

private:
    int b;
};

/* for a protected is member
                 
                     public derivation   private derivation  protected derivation

 1.Private member    Not inherited        Not Inherited       Not inherited
 2.Protected member  protected            private             protected 
 3.Public member     public               private             protected
*/


class Derived : protected Base
{
    public:
 int x;

};

int main()
{
    Base b;
    Derived d;
    //cout<<d.a;// will not work as in both base and derived class it is protected 
   
    return 0;
}