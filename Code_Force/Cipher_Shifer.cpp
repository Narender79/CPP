#include<iostream>
#include<string>
using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n;
          string s;
          cin>>n>>s;
          reverse(s.begin(),s.end());
          string ans="";
          while(s.size()){
               ans+=s.back();
               s.pop_back();
               while(s.back()!=ans.back()){s.pop_back();}
               s.pop_back();
          }
          cout<<ans<<endl;

     }
}

// int main()
// {
//      int t;
//      cin>>t;
//      while (t--)
//      {
//           int n;
//           string s;
//           cin>>n>>s;
//           int i=0;
//           while(i<n){
//                int sat=i;
//                cout<<s[i++];
//                while(s[i++]!=s[sat]);
//           }
//           cout<<endl;
//      }
     
// }