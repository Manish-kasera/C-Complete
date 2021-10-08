#include <iostream>
using namespace std;

//Constructor Overloading

class Add
{
    int a, b, c, d;

public:
    Add(int x, int y)
    {
        a = x;
        b = y;
        cout << a + b << endl;
    }
    Add(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
        cout << a + b + c << endl;
    }
    Add(int x, int y, int z, int m)
    {
        a = x;
        b = y;
        c = z;
        d = m;
        cout << a + b + c + d << endl;
    }
};

int main()
{
    Add a1(1, 3);
    Add a2(1, 2, 3);
    Add a3(1, 2, 3, 4);

    return 0;
}