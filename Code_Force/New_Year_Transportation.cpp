#include<iostream>
using namespace std;
int main()
{
     int i=1;
     long long int n,tar;
     cin>>n>>tar;
     long long int arr[n];
     for(int j=0;j<n-1;j++)
     {
          cin>>arr[j];
     }
     while(i<n)
     {
          long long int ind=i+arr[i-1];
          if(ind==tar){
               cout<<"YES"<<endl;
               break;
          }
          i=ind;
     }
     if(i>=n){cout<<"NO"<<endl;}
}