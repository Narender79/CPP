#include<iostream>
#include <algorithm>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--){
        int len;
        cin>>len;
        int arr[len];
        bool sort=true;
        int diff=1e9;
        for(int i=0;i<len;i++)
        {
            cin>>arr[i];
            if(i>0){
                diff=min(arr[i]-arr[i-1],diff);
                sort=sort & arr[i]>=arr[i-1];
            }
        }
        if(!sort){
            cout<<0<<endl;
            // continue;
        }
        else{
            cout<<(diff/2)+1<<endl;
        }
    } 
    
}