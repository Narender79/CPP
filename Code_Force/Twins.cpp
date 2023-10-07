#include<iostream>
using namespace std;

int main()
{
     int n,s=0,s1=0,cnt=0;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){cin>>arr[i]; s+=arr[i];}
     s=s/2;
     sort(arr,arr+n);
     for(int i=n-1;i>=0;i--)
     {
          if(s1>s){break;}
          s1+=arr[i];
          cnt++;
     }
     cout<<cnt<<endl;

}