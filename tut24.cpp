#include <iostream>
using namespace std;

class Employee
{

    int id;
    static int count; //Don't initize count = 0 as static member default value is zero
    string name;

public:
    void setData(void);
    void printData(void);
    static void getCount()  //static fn dusre static variable ko bs access kr skta hai
    {
        //cout<<"print id:"<<id; //Throws an Error
        cout << "This is Employee No:" << count << endl;
    }
    //void noOfEmployee(void);
};

// Count is the Static data member of class Empolyee
int Employee::count; // Defining the Static Variable count
/* Here we can set the value of count anything like eg. count=100 the our
  count start with 100 and the incresases */

void Employee ::setData(void)
{
    cout << "Enter the id and Name:";
    cin >> id;
    cin >> name;
    count++;
}
void Employee ::printData(void)
{
    cout << "Employee id is:" << id << " and Name is :" << name << endl;
    getCount(); //nesting of members
    // noOfEmployee(); //nesting of Members
}

// void Employee ::noOfEmployee(void)
// {
//     cout << "This is empolyee No:" << count << endl;
// }

int main()
{
    Employee harry, rohan, lovish, verma;
    // harry.id = 10;
    // harry.count=1;   // Can't do this as id and name are private in class
    harry.setData();
    harry.printData();
    //Employee ::getCount();

    rohan.setData();
    rohan.printData();
    //Employee ::getCount();

    lovish.setData();
    lovish.printData();
    //Employee ::getCount();

    verma.setData();
    verma.printData();
    //Employee ::getCount();

    return 0;
}