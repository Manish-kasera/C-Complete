#include<iostream>
using namespace std;

// // This Will Not Swap the numbers
// void swap(int a,int b){
//     int temp = b;
//     b = a;
//     a = temp;
// }


// // This will swap the Numbers
// void swapPointer(int* a,int* b){
//     int temp = *b;
//     *b = *a;
//     *a = temp;
//}

// Call By Reference Using C++ reference

//  void swapReferenceVar(int &x,int &y){
//        int temp = x;
//        x = y;
//        y = temp;
//  }


//int &
void swapReferenceVar(int &x,int &y){
  int temp = x;
  x = y;
  y = temp;
  //return x;

}


int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<num1<<" "<<num2<<endl;

    //swap(&num1,&num2);//Don't Work
    //swapPointer(&num1,&num2); //Work
     swapReferenceVar(num1,num2); //Using reference
     
    // cout<<num1<<" "<<num2;
    // swapReferenceVar(num1,num2) = 766;
    cout<<num1<<" "<<num2<<endl;
    return 0;
}