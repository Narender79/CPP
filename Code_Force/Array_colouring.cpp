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
          int arr[n];
          for(int i=0;i<n;i++){cin>>arr[i];}
          sort(arr,arr+n);
          int sum1=0,sum2=0; 
          int temp=n/2;
          for(int i=0;i<n-temp;i++){sum1+=arr[i];}
          while(temp)
          {
               sum2+=arr[n-1];
               n--;
               temp--; 
          }
          if((sum1%2==0 && sum2%2==0) || (sum1%2!=0 && sum2%2!=0)){cout<<"Yes"<<endl;}
          else{cout<<"No"<<endl;}
     }
}