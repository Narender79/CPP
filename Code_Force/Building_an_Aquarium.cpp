#include<iostream>
#include<vector>
using namespace std;



int main(){
     int t;
     cin>>t;
     while (t--)
     {
          int n,k;
          int mx=INT_MIN;
          cin>>n>>k;
          vector<int> v(n);
          for(int i=0;i<n;i++){
               int num;
               cin>>num;
               v.push_back(num);
          }
          sort(v.begin(),v.end());


     }
     
}