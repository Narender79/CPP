#include<iostream>
using namespace std;

int main()
{
     long long int n,cnt=0;
     cin>>n;
     while(n){
          if(n%2==1){
               cnt++;
          }
          n=n/2;
          // if(n&1)
          // {
          //      cnt++;
          // }
          // n>>=1;
     }
     cout<<cnt<<endl;
}