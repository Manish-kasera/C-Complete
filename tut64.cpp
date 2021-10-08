
// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// class Vector
// {
// public:
//     int * arr; // Thoda dhayan de
//     int size;

//     Vector(int m)
//     {
//         size = m;
//         arr = new int[size];  // Thoda dhayan de
//     }
//     int  dotProduct(Vector &v)  //&v is reference variable
//     {
//         int d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d += arr[i] * v.arr[i];
//         }
//         return d;
//     }
// };

// int main()
// {
//     Vector v1(3);
//     v1.arr[0] = 1;
//     v1.arr[1] = 2;
//     v1.arr[2] = 5;

//     Vector v2(3);
//     v2.arr[0] = 1;
//     v2.arr[1] = 2;
//     v2.arr[2] = 2;

//     int x = v1.dotProduct(v2);
//     cout<<"The dot Product is:"<<x;
//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

template <class T>

//jasa jasa "T" hai waha hm custom data de rhe hai...

class Vector
{
public:
    T *arr; // Thoda dhayan de
    int size;

    Vector(int m)
    {
        size = m;
        arr = new T[size]; // Thoda dhayan de
    }
    T dotProduct(Vector &v) //&v is reference variable
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * -v.arr[i];
        }
        return d;
    }
};

int main()
{
    //class ke baad  < data-type> 
    Vector <float> v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2.4;
    v1.arr[2] = 3;

    Vector <float> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 2;
    v2.arr[2] = 3.3;


    float x = v1.dotProduct(v2);
    cout << "The dot Product is:" << x;
    return 0;
}
