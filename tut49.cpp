#include <iostream>
#include <algorithm>
using namespace std;

/*
  syntax for initization of list in Constructor

  Constructor (argument-list) : Initilization Section{
      assignment + other Code;
  }

class Test{
    int a,b;
    public:
      Test(int x,int y) : a(x),b(y){
        cout<<"Constructor Executed"<<endl;
      }
} ; 

*/

class Test
{
    int a, b;

public:
    //Test(int i, int j) : a(i), b(j)
    //Test(int i, int j) : a(i), b(i+j)
    //Test(int i, int j) : a(i), b(2 * j)
    //Test(int i, int j) : a(i), b(a * j)
    // Test(int i, int j) : b(j), a( i+b) //---> this will xreate problem (A must be initilze first)
    //Test(int i, int j) : a(b*i), b(j)    //---->galat bcz "b" bina initilze kiye use kr rhe hai 
    Test(int i, int j) : a(i)   
    {
         b = j;
        cout << "Constructor Executed" << endl;
        cout<<"Value of a is "<< a<<endl;
        cout<<"Value of a is "<< b<<endl;
    }
};

int main()
{
    Test t(10, 20);
    return 0;
}