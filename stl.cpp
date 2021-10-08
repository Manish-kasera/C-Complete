#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool mydes(int a,int b){
    return(a>b);
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cout<<"Without sorting:";
    for(auto it1=v.begin(); it1!=v.end();it1++){
        cout<<*it1<<" ";
    }
    cout<<endl;

    cout<<"Reverse order is:";
    reverse(v.begin(),v.end());
    for(auto it=v.begin(); it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end(),mydes);
    cout<<"Sorting in descending order:";
    for(auto it3=v.begin();it3!=v.end();it3++){
        cout<<*it3<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end());
    cout<<"Sorting in ascending order:";
    for(auto it2=v.begin();it2!=v.end();it2++){
        cout<<*it2<<" ";
    }
    cout<<endl;
    
    //******lower_bound  >= than*******
    auto it4 = lower_bound(v.begin(),v.end(),17);
    cout<<"The lower_bound is:"<<*it4<<endl;


    //*****upper_bound i.e strictly > than*******
    auto it5 = upper_bound(v.begin(),v.end(),17);
    cout<<"The upper_bound is:"<<*it5<<endl;

  return 0;  
}