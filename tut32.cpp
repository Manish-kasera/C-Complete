#include <iostream>
using namespace std;

//Constructor with Default Arguments

class simple
{
    int data1, data2, data3;

public:
    simple(int x, int y = 0, int z = 3) // y default value of "y" is 0 and "z" is 3
    {
        data1 = x;
        data2 = y;
        data3 = z;
    }

    void printData(void)
    {
        cout << "data1:" << data1 << "  data2:" << data2 << "  data3:" << data3 << endl;
    }
};

int main()
{
    simple a(10, 20, 30);
    a.printData();

    simple b(1, 2);
    b.printData();

    simple c(5);
    c.printData();

    return 0;
}