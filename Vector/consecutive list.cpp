#include<iostream>
#include<vector>
//#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool flag=false;
    int a[]={0 ,1 ,2 ,3 ,5 ,6 ,7};//{1, 2 ,5, 7, 4, 3, 6}
    vector <int> vec;
    for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++)
    {
        vec.push_back(a[i]);
    }
    sort(vec.begin(),vec.end());
    
    for(auto x : vec)
    {
        cout<<x<<" "<<"\n";
    }
    
    for(int i=0;i<vec.size()-1;i++)
    {
        if(vec[i+1]!=vec[i]+1)
        {
            flag=false;
            cout<<"false";
            break;
        }
        else
        {
            flag=true;
        }
    }
    if(flag==true)
    {
        cout<<"true";
    }
}