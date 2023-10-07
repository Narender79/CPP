#include<iostream>
#include<string>
using namespace std;

int main()
{
     string s;
     cin>>s;
     char ch=s[0];
     int cnt=1;
     for(int i=1;i<s.length();i++)
     {
          if(cnt==7){break;}
          if(ch==s[i]){ cnt++;}
          else { ch=s[i]; cnt=1;}
     }
     if(cnt==7){cout<<"YES"<<endl;}
     else{cout<<"NO"<<endl;}
}