#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

//Class Template with default parameter

template <class T1 = int, class T2 = int>
class Manish
{
protected:
    T1 a;
    T2 b;

public:
    Manish(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void printSum(void)
    {
        cout << "sum of a and b is :" << a + b << endl;
    }
};

int main()
{
    Manish<float,float> m(10.222, 19.2);
    m.printSum();
    return 0;
}