#include <iostream>
using namespace std;

//Virtual Base Class example

/*
syntax 1:
 
class Base : virtual access_mode derived{

};

syntax 2:

class Base : access_mode virtual derived{

};

*/

/*
Inheritance:

 Students--->Test
 Students--->Sports
 Test------>Result
 Sports------>Result
*/

class Students
{
protected:
    int roll_no;

public:
    void setRoll_no(int x)
    {
        roll_no = x;
    }
    void printRoll_no()
    {
        cout << "Your roll no: " << roll_no << endl;
    }
};

class Test : virtual public Students
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your result is here "
             << "Maths :" << maths
             << " Physics : " << physics << endl;
    }
};

class Sports : virtual public Students // : public virtual Students (same hai)
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Your PT score is : " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        printRoll_no();
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};

int main()
{
    Result harry;
    harry.setRoll_no(11);
    harry.set_marks(90, 93);
    harry.set_score(8);
    harry.display();

    return 0;
}