#include<iostream>
using namespace std;


typedef struct employee   //Total Memory = 9
{
    /* data */
    int eId; //4
    float eSalary;  //4
    char favChar; //1
}em;


union money // Total Memory = 4
{
    /* data */
    int rice; //4
    float pounds;//4
    char car; //1
};


int main(){
    //**********Structure,Union and Enum**************

    // em harry;
    // struct employee subham;
    // struct employee aman;
    // harry.eId = 1233;
    // harry.eSalary = 1990.99;
    // harry.favChar ='h';
    // cout<<harry.eSalary<<endl;
    // cout<<harry.eId<<endl;
    // cout<<harry.favChar<<endl;

   
    // union money m1;
    // m1.car ='c'; 
    // m1.rice = 10;
    // m1.pounds = 20.1;//Ye overwrite ho jaega
    
    // cout<<m1.pounds<<endl;//Bs ye Sahi aaega
    // cout<<m1.rice<<endl;
    // cout<<m1.car<<endl;



    //*************Enum****************

    // Defining enum Gender 
    // enum Gender { Male, Female }; 
  
    // // Creating Gender type variable 
    // Gender gender = Male; 
  
    // switch (gender) { 
    // case Male: 
    //     cout << "Gender is Male"; 
    //     break; 
    // case Female: 
    //     cout << "Gender is Female"; 
    //     break; 
    // default: 
    //     cout << "Value can be Male or Female"; 
    // } 

    // enum Meal{breakfast,lunch,dinner};
    // Meal m1=breakfast;
    // cout<<m1<<endl;
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;


    return 0;
}