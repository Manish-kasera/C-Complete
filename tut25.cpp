#include <iostream>
using namespace std;

class Employee
{
    int id, salary;

public:
    void setId(void)
    {
        salary = 120000;
        cout << "Enter Your Id:" << endl;
        cin >> id;
    }
    void printId(void)
    {
        cout << "Your Id is:" << id << endl;
    }
};

int main()
{
    // Employee harry,mahesh,suresh,verma;
    // harry.setId();
    // harry.printId();

    Employee fb[4]; //Array of Objects
    // fb[0].setId();
    // fb[0].printId();
    // fb[1].setId();
    // fb[1].printId();
    // fb[2].setId();
    // fb[2].printId();
    // fb[3].setId();
    // fb[3].printId();

    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].printId();
    }

    return 0;
}