// #include <iostream>
// using namespace std;

////Single Inheritance

// class Parent
// {
// public:
//     string surname = "Kasera";
// };

// class Child : public Parent
// {
// public:
//     string name;
// };

// int main()
// {
//     Child c;
//     c.name = "Manish";
//     cout<<c.name<<" "<<c.surname<<endl;

//     return 0;
// }





#include <iostream>
using namespace std;

// Multiple inheritance

class Mother
{
public:
    string beh = "Hard Working";
};

class Father
{
public:
    string surname = "Kasera";
};

class Child : public Father, public Mother
{
public:
    string name;
};

int main()
{
    Child c;
    c.name = "Manish";
    cout << c.name <<" "<< c.surname << " is " << c.beh << endl;
    return 0;
}




// #include<iostream>
// using namespace std;

// // Hierarchical inheritance

// class Vehicle{
//     public:
//       Vehicle(){
//           cout<<"This is a Vehicle"<<endl;
//       }
    
// };

// class Bus : public Vehicle{

// };

// class Car : public Vehicle{

// };

// int main(){
//     Bus b;
//     Car c;
//     return 0;
// }




// #include <iostream>
// using namespace std;

// // Multilevel Inherited

// class Grandfather
// {
// public:
//     string surname = "Kasera";
// };

// class Father : public Grandfather
// {
// public:
//     string sname = "Kumar";
// };

// class Child : public Father
// {
// public:
//     string name = "Manish";
// };

// int main()
// {
//     Child c1;
    

//     return 0;
// }