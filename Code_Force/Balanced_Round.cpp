#include<iostream>
#include <cstdlib>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n,k;
          cin>>n>>k;
          int arr[n];
          for(int i=0;i<n;i++){cin>>arr[i];}
          int cnt=1,ans=1;
               sort(arr,arr+n);
               for(int i=1;i<n;i++)
               {
                    if(abs(arr[i]-arr[i-1])>k){cnt=1;}
                    else{cnt++;}
                    ans=max(ans,cnt);
               }
               
               cout<<n-ans<<endl;
     }
}