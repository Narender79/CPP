#include<iostream>
using namespace std;

int main()
{
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){cin>>arr[i];}
     int k;
     cin>>k;
     k%=n;
     while(k>0)
     {
          int temp=arr[n-1];
          for(int i=n-1;i>0;i--)
          {
               arr[i]=arr[i-1];
          }
          arr[0]=temp;
          k--;
     }
     for(int i=0;i<n;i++){cout<<arr[i]<<" ";}
     cout<<endl;
}