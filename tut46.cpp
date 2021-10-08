// #include<iostream>
// #include<algorithm>
// using namespace std;
//    //Constructor In Derived Class
// class Parent{
//     public:
//     Parent(){
//         cout<<"In base Class"<<endl;
//     }
// };

// class Students : public Parent{
//     public:
//     Students(){
//         cout<<"In Derived Class"<<endl;
//     }
// };

// int main(){
//    Students s1;
//     return 0;
// }

// // Constructor in Derived Class(Virtual Base Class )

// #include <iostream>
// #include <algorithm>
// using namespace std;

// class Parent
// {
// public:

//     Parent()
//     {
//         cout << "In parent class" <<endl;
//     }
// };

// class Son1 : virtual  public Parent
// {
// public:
//     Son1()
//     {
//         cout << "In Son1 class" << endl;
//     }
// };

// class Son2 : virtual public Parent
// {

// public:
//     Son2()
//     {
//         cout << "In Son2 class" << endl;
//     }
// };

// class Daughter :  public Son1, public Son2
// {
//     public:
//   Daughter(){
//   cout<<"In Daughter class"<<endl;
//   }
// };
// int main()
// {
//   Daughter d;
//     return 0;
// }

// //Constructor in Derived Class  (Multilevel Inheritance)

// #include <iostream>
// #include <algorithm>
// using namespace std;

// class A
// {
// public:
//     A()
//     {
//         cout << "In A Class" << endl;
//     }
// };
// class B : public A
// {
// public:
//     B()
//     {
//         cout << "In B Class" << endl;
//     }
// };
// class C : public B
// {
// public:
//     C()
//     {
//         cout << "In C Class" << endl;
//     }
// };

// int main()
// {
//    C c;
//     return 0;
// }
