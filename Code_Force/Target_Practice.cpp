#include<iostream>
// #include<map>
#include<vector>
#include <utility>
using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--){
          long long int ans=0;
          vector< pair< int, int> > vp;
          // map<int,int> mpp;
     char arr[10][10];
     for(int i=0;i<10;i++){
          for(int j=0;j<10;j++){
               cin>>arr[i][j];
               if(arr[i][j]=='X'){
                    // mpp[i]=j;
                    vp.push_back(make_pair(i,j));
               }
          }
     }
     for(int i=0;i<vp.size();i++){
          if(vp[i].first==0 || vp[i].first==9 || vp[i].second==0 || vp[i].second==9) {
               ans+=1;
               // cout<<" 1ans: "<<ans<<endl;
          }
          else if(vp[i].first==1 || vp[i].first==8 || vp[i].second==1 || vp[i].second==8){
               ans+=2;
               // cout<<" 2ans: "<<ans<<endl;
          }
          else if(vp[i].first==2 || vp[i].first==7 || vp[i].second==2 || vp[i].second==7){
               ans+=3;
               // cout<<" 3ans: "<<ans<<endl;
          }
          else if(vp[i].first==3 || vp[i].first==6 || vp[i].second==3 || vp[i].second==6){
               ans+=4;
               // cout<<" 4ans: "<<ans<<endl;
          }
          else if(vp[i].first==4 || vp[i].first==5 || vp[i].second==4 || vp[i].second==5){
               ans+=5;
               // cout<<" 5ans: "<<ans<<endl;
          }
     }
     cout<<ans<<endl;
     }
}
     /*for(auto it: mpp){
          if(it.first==0 || it.second==0 || it.first==9 || it.second==9){
               ans+=1;
          }
          if(it.first==1 || it.first==8 || it.second==1 || it.second==7){
               ans+=2;
          }
          if(it.first==1 || it.first==8 || it.second==1 || it.second==7)
          {
               ans+=3;
          }
          if(it.first==1 || it.first==8 || it.second==1 || it.second==7)
          {
               ans+=4;
          }
          if(it.first==4 || it.first==5 || it.second==5 || it.second==4)
          {
               ans+=5;
          }
     }*/