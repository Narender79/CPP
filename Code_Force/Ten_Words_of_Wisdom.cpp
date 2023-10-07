#include<iostream>
#include<vector>
#include <utility>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n,cnt=0,mn=INT_MIN;
          cin>>n;
           vector< pair <int,int> > vect;
          for(int i=0;i<n;i++){
               int a,b;
               cin>>a>>b;
               vect.push_back(make_pair(a,b));
               if(vect[i].first>10){continue;}
               else{
                    for(int j=0;j<i;j++){
                    if(vect[i].second==vect[j].second){break;}
               }
                    if(vect[i].second>mn){mn=vect[i].second; cnt=i+1;}
               }
          }
          cout<<cnt<<endl;
     }
}