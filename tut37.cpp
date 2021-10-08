#include <iostream>
using namespace std;

//Inheritance Syntax
/*
class derivedClass : access_mode baseClass{
   // body of derivedClass 
}

Note:
 1. Default access_mode is private.
 2.Public access_mode : Public member of base class become public
   member of derived class.
 3.Private access_mode : public member of base class become private
   member of derived class.
 4. Private memberS are never inherited.   
*/

class Empolyee
{
public:
    int id;
    float salary;
    Empolyee(){};
    Empolyee(int inpId)
    {
        id = inpId;
        salary = 30.0;
    }
};

class Programmer : public Empolyee
{
public:
    int languageCode = 9;
    Programmer(int inpId){
        id = inpId;
    }
    void getData(){
        cout<<"id is:"<<id<<endl;
    }
};

int main()
{
    Empolyee harry(1), mahesh(2), suresh(3);
    cout << harry.salary << endl;
    cout << mahesh.salary << endl;
    Programmer skillf(22);
    skillf.getData();
    //cout<<skillf.id<<endl;
    return 0;
}