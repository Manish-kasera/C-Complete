#include <iostream>
using namespace std;

//Destructor in C++

//Destructor never takes an argument and they dont have return type
int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when the Constructor is called for the  object." << count << endl;
    }

    //destructor
    ~num()
    {
        cout << "This is the time when the Destructor is called for the  object." << count << endl;
        count--;
    }
};

int main()
{
    cout << "Main function" << endl;
    cout << "Creating first Objects num1" << endl;
    num n1; // constructor called
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more Objects"<<endl;
        num n2,n3;
        cout<<"Existing this block"<<endl;
    }
    cout<<"Back to Main"<<endl;
    return 0;
}