#include<iostream>
using namespace std;

class students
{
    public:
      string name;
      void getMarks(int x);
      void printMarks(){
          cout<<"Your Name is : "<<name<<endl;
          cout<<"Your marks is "<<marks<<endl;
      }
    private:
      int marks; 
         
};
void students :: getMarks (int x){
    marks = x;
} 

int main(){
    
    students s1;
    s1.name ="Manish";
    s1.getMarks(20);
    s1.printMarks();
    
    return 0;
}