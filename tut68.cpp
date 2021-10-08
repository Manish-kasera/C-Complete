#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

//Member Function Template Overloading Template Functiom
template <class T>
class Manish
{
public:
    T data;
    Manish(T x)
    {
        data = x;
    }
    void display();
    // void display(){
    //     cout<<"Data is:"<<data<<endl;
    // }
};
 
template<class T>                            //Ye dono line important hai
void Manish <T>::display(){     //returnType className <> :: memberfnName    //Ye dono line important hai                          
    cout<<"data is:"<<data<<endl;
}

// Exact match jadda priority hai wahi excute hoga

void myFunc(int a){
    cout<<"First func:"<<a<<endl;
}



template<class T>
void myFunc(T a){
    cout<<"This is templating  func:"<<a<<endl;
}

int main()
{
    // Manish <float>  M(5.5);
    // cout<<M.data<<endl;
    // M.display();
    myFunc(10); //first func
    myFunc("Manish"); // Tempalting function run hoga
    myFunc('c');      // Tempalting function run hoga
    myFunc(2.33);     // Tempalting function run hoga
    return 0;
}