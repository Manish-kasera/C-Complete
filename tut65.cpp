#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

// //Template with Multiple Parameter

// template <class T1, class T2>

// class Sum
// {
// protected:
//     T1 x;
//     T2 y;

// public:
//     Sum(T1 a, T2 b)
//     {
//         x = a;
//         y = b;
//     }
//     void printSum()
//     {
//         cout<<x+y;
//     }
// };
// int main()
// {
//     Sum<int,char> A(10, 'a');
//     A.printSum();
//     return 0;
// }

/*
  Syntax for Template with multiple parameters
  
  template <class T1,class T2,....>
  
  class nameofClass{
  //body
  };

*/


template <class T1, class T2>
class myClass
{
    T1 data1;
    T2 data2;

public:
    myClass(){}
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void printData(void)
    {
        cout <<"data1 = "<< this->data1 << " data2 = "<<this->data2<<endl;
    }
};

int main()
{
    myClass<int, char> obj1(11,'a');
    obj1.printData();

    myClass<int, float> obj2(11,12.332);
    obj2.printData();

    myClass<double, char> obj3(11.323492447,'a');
    obj3.printData();

    
    return 0;
}



