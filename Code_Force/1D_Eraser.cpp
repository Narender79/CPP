#include<iostream>
using namespace std;

int main(){
     int t,n,k;
     string s;
     cin>>t;
     while(t--){
          cin>>n>>k>>s;
          int ans=0,i=0;
          while(i<=n){
               if(s[i]=='B'){
                    i+=k;
                    ans++;
               }
               else{
               i++;}
          }
          cout<<ans<<endl;
     }
}

/*
8
6 3
WBWWWB
7 3
WWBWBWW
5 4
BWBWB
5 5
BBBBB
8 2
BWBWBBBB
10 2
WBBWBBWBBW
4 1
BBBB
3 2
WWW
*/