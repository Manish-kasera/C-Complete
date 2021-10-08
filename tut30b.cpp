#include <iostream>
#include <cmath>
using namespace std;

// Distannce bw two Points Usingg Constructor

class Point
{
    int x, y;
    friend void distance(Point, Point);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void printPoint(void)
    {
        cout << "The Value of x and y coordinates are:"
             << "(" << x << "," << y << ")" << endl;
    }
};

/*Create a function which takes 2 point objects and  compute the 
distance bewtween the pints */

void distance(Point a, Point b)
{
    float dis = sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
    cout << "Hence the distance b/w "
         << "(" << a.x << "," << a.y << ")";
    cout << "and "
         << "(" << b.x << "," << b.y << ") is : " << dis << endl;
}

int main()
{

    Point p(1, 1);
    p.printPoint();

    Point q(4, 6);
    q.printPoint();

    distance(p, q);

    return 0;
}