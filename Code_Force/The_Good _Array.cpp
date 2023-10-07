#include<iostream>
#include <cmath>
using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          double n,k;
          cin>>n>>k;
          double temp=n+k-1;
          double ans=ceil(temp/k);
          cout<<ans<<endl;
     }
}