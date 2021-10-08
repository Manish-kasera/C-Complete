#include <iostream>
using namespace std;

//Swapping value in class c1 and class c2 using reference

class c2;

class c1
{
    int val1;

public:
    void indata(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << "Value is :" << val1 << endl;
    }
    friend void exchange(c1 &,c2 &);
};

class c2
{
    int val2;

public:
    void indata(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << "Value is :" << val2 << endl;
    }
      friend void exchange(c1 &,c2 &);
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
 c1 oc1;
 c2 oc2;

 oc1.indata(93);
 oc2.indata(4);
 exchange(oc1,oc2);
 oc1.display();
 oc2.display();
    return 0;
}