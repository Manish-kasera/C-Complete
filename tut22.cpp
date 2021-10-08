#include <iostream>
#include <string>
using namespace std;


//C++------------>Extension of Structure(in C)
    // structure limitataion
    //  ---> all members are public
    //  ---> method is absent

    // Classes == Structure + More
    // Classes   ---> have mnethod and property

    // We can create Object along with Class declarsion
    /*  class employee
           {
             Class declare
          }Manish,prince,Sunil; */


//Nesting of Members in Function

class Binary
{
    string s;

    public:
    void readBinary(void);
    void chkBinary(void);
    void onceCompliment(void);
};


void Binary :: readBinary(void){
    cout<<"Write a Binary Number:";
    cin>>s;
    //chkBinary(); // Ishko yaha likh skte hai ishiko nesting of memebers in function
   
}

void Binary :: chkBinary(void){
   for(int i=0;i<s.length();i++){
       if((s.at(i)!='1') && (s.at(i)!='0') ){
         cout<<"Binary is Invalid"<<endl;
         exit(0);  
       }
   }
}

void Binary :: onceCompliment(void){
    cout<<"Its Once Compliment is:";
    for(int i=0;i<s.length();i++){
        if(s.at(i) == '1')
          cout<<"0";
        if(s.at(i) == '0'){
            cout<<"1";
        }
    }

}

int main()
{

    Binary b1;
    b1.readBinary();
    b1.chkBinary();
    b1.onceCompliment();
    return 0;
}