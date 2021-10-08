#include <iostream>
using namespace std;

class Students
{
protected:
    int roll_no;

public:
public:
    void set_roll_no(int);
    void get_roll_no(void);
};

void Students ::set_roll_no(int r)
{
    roll_no = r;
}

void Students ::get_roll_no(void)
{
    cout << "Your roll no is : " << roll_no << endl;
}

class Exam : public Students
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float x, float y)
{
    maths = x;
    physics = y;
}

void Exam ::get_marks(void)
{
    cout << "Maths marks are :" << maths << endl
         << "Physics marks are:" << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_result(void);
};

void Result ::display_result(void)
{
    get_roll_no();
    get_marks();
    cout << "Your percentage is :" << (maths + physics) / 2 << "%" << endl;
}

int main()
{
    Result harry;
    harry.set_roll_no(10);
    harry.set_marks(90, 94);
    harry.display_result();

    return 0;
}

/*
 Notes:
  If we are  inheriting B from A and C from b --->[A--->B--->C]
  1.A is the base Class of B and B is the Base class of C.
  2.A--->B---->C is inheritance Path 

*/