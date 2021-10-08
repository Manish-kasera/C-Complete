#include<iostream>
using namespace std;

// OOPS ----> Class and Object 

class Empolyee
{
private:
    /* data */
    int a,b,c;
public:
   int d,e;

   void setData(int a1,int b1,int c1); //.Declaration
   void getData(){
    cout<<"The Value of a is "<<a<<endl;
    cout<<"The Value of b is "<<b<<endl;
    cout<<"The Value of c is "<<c<<endl;
    cout<<"The Value of d is "<<d<<endl;
    cout<<"The Value of e is "<<e<<endl;
   }
   
};

void Empolyee :: setData(int a1,int b1,int c1){  // Scope resolution opertor ::
    a = a1;
    b = b1;
    c = c1;
}



int main(){
    Empolyee harry;
    harry.d=111;
    harry.e=11;
    harry.setData(1,2,4);
    harry.getData();
    return 0;
}