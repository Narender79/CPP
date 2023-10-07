#include<iostream>
using namespace std;

int main()
{
     string s;
     cin>>s;
     int ind=0;
     char arr[]={'h','e','l','l','o'};
     for(string::size_type i=0;i<s.length();i++){
          if(s[i]==arr[ind]){
               ind++;
          }
     }
     if(ind==5){
          cout<<"YES"<<endl;
     }
     else{
          cout<<"NO"<<endl;
     }
}