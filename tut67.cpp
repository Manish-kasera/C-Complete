#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

//Function Template and Function Template with Parameter

// float funAverage(int x,int y){
//     return ((x+y)/2);
// }

// float funAverage2(int x,float y){
//     return ((x+y)/2);
// }

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T1, class T2>
float funAverage(T1 x, T2 y)
{
    float avg = ((x + y) / 2.0);
    return avg;
}

int main()
{
    float z = funAverage(2, 5);
    cout << "Average is:" << z << endl;

    int x = 5, y = 7;
    swapp(x, y);
    cout << "x=" << x << " y=" << y << endl;
    return 0;
}