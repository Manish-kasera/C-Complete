#include <iostream>
using namespace std;

class GrandFather
{
public:
    string sname = "Kasera";
    void surname(){
        cout<<"Surname is :"<<sname<<endl;

    }
};

class Father : virtual public GrandFather
{
};

class Mother : virtual public GrandFather
{
};

class Son : public Mother, public Father
{
};

int main()
{
   Son s1;
   s1.surname();
    return 0;
}