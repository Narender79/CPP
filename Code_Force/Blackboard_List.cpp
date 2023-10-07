#include<iostream>
using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n;
          cin>>n;
          int mn=INT_MAX;
          int mx=INT_MIN;
          for(int i=0;i<n;i++){
               int x;
               cin>>x;
          mn=min(mn,x);
          mx=max(mx,x);
          }
          if(mn<0){cout<<mn<<endl;}
          else{cout<<mx<<endl;}
     } 
}
