#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    ////basic of pointer
    // int x = 10;
    // int* ptr =&x;
    // cout<<ptr<<endl;

    // int x = 10;
    // int* ptr =&x;
    // cout<<"The value of x:"<<*(ptr)<<endl<<sizeof(ptr)<<endl;
    
    // new Operator   // Delete Operator

    // int* p = new int(100); // Dynamically memory allocate ho rha hai
    // float* q = new float(12.343); // Dynamically memory allocate ho rha hai
    // cout<<"The Value at address p is:"<<*(p)<<endl;    
    // cout<<"The Value at address q is:"<<*(q)<<endl;    


    int* arr = new int[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    delete[] arr; //dynamically array ko delete/free kr dega
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}