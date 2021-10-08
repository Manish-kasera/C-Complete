#include <iostream>
#include <algorithm>
using namespace std;

// Commented Links ko mast se pdhege aage kaam aaega
/* 
"this" is a keyword which is a pointer which points to the objects which
invoked the member function

*/

class A
{
    int x;

public:
    //A& setData(int x)  //Return  krega ek object data
    void setData(int x) //clas ka and setData ka variable same hai 
    {
        this->x = x;
        // return(*this);
    }
    void printData()
    {
        cout << "Value of x = " << x << endl;
    }
};

int main()
{
    A a;
    // a.setData(10).printData(); ----> Ye bhi sahi hai jb return walla case rhega
    a.setData(20);
    a.printData();
    return 0;
}