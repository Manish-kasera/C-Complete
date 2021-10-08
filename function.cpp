// #include<iostream>
// #include<string>
// using namespace std;

// void sum(int x,int y);  // Function Protoype

// int product(int x,int y){  // Formal argument
//     return(x*y);

// int modulo (){
//     int a,b;
//     cout<<"Enter two numbers:"<<endl;
//     cin>>a>>b;
//     return(a%b);
// }

// void square(){
//     int num1;
//     cout<<"Enter a number:"<<endl;
//     cin>>num1;
//     cout<<"Sqare is :"<< (num1*num1);
// }

// int main(){
//     int a,b;
//cin>>a>>b;
//sum(a,b); // Actual Argument   (1)

// int pro = product(a,b);       (2)
// cout<<"Product is "<<pro<<endl;

// int mod = modulo();      (3)
// cout<<"Modulo is: "<<mod<<endl;

//square();

// Type of Function
//  --> take something return nothing
//  --> take something return something
//  --> take nothing return someting
//  --->take nothing return nothing

// int fact=1;
//  for(int i=1;i<=6;i++){
//    fact *= i;

//  }

// cout<<fact;

// Area of Circle
//  float r,area;
//  const float pi=3.14;
//   cout<<"put Radius:"<<endl;
//   cin>>r;
//   area = pi*r*r;
//   cout<<"Area is :"<< area;

//     return 0;
// }

// void sum(int x,int y){
//   cout<<"sum is "<<x+y;

//cout<<"Manish Kasera";

// int x =12022;
// char s = __int_to_char

// return 0;
// }

// #include<iostream>
// #include<algorithm>
// #include<cstring>
// using namespace std;

// int main(){
//   int n,d;
//   cin>>n>>d;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }

//   for(int i=d;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   for(int i=0;i<d;i++){
//     cout<<arr[i]<<" ";
//   }

//    return 0;
// }


// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// int sumNumber(int arr[],int n){
//   int sum=0;
//   for(int i=0;i<n;i++){
//     sum+=arr[i];
//   }
//   return(sum);
  
// }


// int main()
// {
//   int n;
//   cin >> n;
//   int arr[n];
//   int sum = 0;

//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }

//   int s=sumNumber(arr,n);
//   //sum(a,b)
//   cout<<s;

//   return 0;
// }

/* 

 N------> even (2,3,4,6,12)--->Size of array

 eg. n=4
   // 1 3 7 10
   //1+3=4    // 7+10=17
   //  4+13=17   //17-13=4

   //Hence we can balance the array by adding or subtracting 13...

*/

