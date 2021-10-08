#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

//tut 69 ,70 me theory hai stl ka
int main(){
    vector <int> v1;
    cout<<"Enter an elements to add in vector";
    for(int i=0;i<4;i++){
        v1.push_back(i);
    }

    for(auto x: v1){
         cout<<x;
    }
    return 0;
}