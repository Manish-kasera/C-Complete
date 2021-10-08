 #include<iostream>
using namespace std;

class Point{
  int x,y;
  public:
    Point(int x1,int y1){
        x = x1;
        y= y1;
    }
    void getData(void);
   
    //When no copy constructor is found,compiler supplies its own copy constructor
    //copy Constructor
    Point (const Point &p2){
        cout<<"Copy Constructor called."<<endl;
         x = p2.x;
         y = p2.y;
    }
};

void Point :: getData(void){
    cout<<"x:"<<x<<" y:"<<y<<endl;
}

int main(){
    Point p1(10,20);
    p1.getData();
    Point p2=p1; 
    p2.getData();
    return 0;
}