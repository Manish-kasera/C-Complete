#include<iostream>
#include<cstring>
using namespace std;

int main(){
    float num1,num2;
    float result;
    cout<<"Enter num1 and num2:"<<endl;
    cin>>num1>>num2;

    cout<<"Enter 1 for addition"<<endl;
    cout<<"Enter 2 for subtraction"<<endl;
    cout<<"Enter 3 for multiplication"<<endl;
    cout<<"Enter 4 for division"<<endl;
    
    cout<<endl<<"Your Choice:"<<endl;
    int choice;
    cin>>choice;

    switch (choice)
    {
     case 1 :
        result=num1+num2;
        cout<<"Sum is: "<<result<<endl;
        break;
    
    case  2 :
          result=num1-num2;
          cout<<"Subtraction is: "<<result<<endl;
        break;
    
    case 3 :
            result=num1*num2;
          cout<<"Product is: "<<result<<endl;
        break;
    case 4 :
          result =num1/num2;
          cout<<"Division is: "<<result<<endl; 
          break;


    default:
       cout<<"Your Choice in not Valid"<<endl;
       cout<<"Choose b/w 1 to 4"<<endl;
        break;
    }
    return 0;
}