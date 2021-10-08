#include <iostream>
using namespace std;

//*********************Array********************************

//int a,b,c,d,e;
// int a[5]={1,2,3,4,5};
// int a[] ={1,2,3,3,4,4,45,5,5};

//;

// int fib(int x){
// 	if(x==1 || x==2)
// 	 return 1;
// 	else{
// 	  x =fib(x-1)+fib(x-2);  //x=fib(6)+fib(5)//x=fib(5)+fib(4)+fib(4)+fib(3)//
// 	  return(x);
// 	}
// }

int main(void)
{
    // int fibo=fib(8);
    // cout<<fibo;

    int arr[5] ;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}