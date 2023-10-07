#include<iostream>
using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--){
          int n,ind=0;
          long long ans=1;
          int mn=INT_MAX;
          cin>>n;
          int arr[n];
          for(int i=0;i<n;i++)
          {
               cin>>arr[i];
               if(mn>arr[i]){
                    mn=arr[i];
                    ind=i;
               }
          }
          arr[ind]=arr[ind]+1;
          for(int i=0;i<n;i++){
               ans*=arr[i];
          }
          cout<<ans<<endl;
     }
}
/*
4
4
2 2 1 2
3
0 1 2
5
4 3 2 3 4
9
9 9 9 9 9 9 9 9 9

*/
