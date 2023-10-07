#include<iostream>
#include<string>
using namespace std;

int main()
{
     string s,temp,res;
     cin>>s;
     // for(int i=0;i<s.length();i++){cout<<s[i];}cout<<endl;
     for(int i=s.length()-1;i>=0;i--)
     {
          if(s[i]!='.')
          {
               temp=s[i]+temp;
          }
          else{
               res+=temp;
               temp="";
               res+='.';
          }
     }
     // cout<<temp<<endl;i.like.this.program.very.much 
     res+=temp;
     for(string::size_type i=0;i<res.length();i++){cout<<res[i];}
     cout<<endl;

}