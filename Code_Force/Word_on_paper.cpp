#include<iostream>
using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          char ch;
          string st="";
          for(int i=0;i<8;i++)
          {
               for(int j=0;j<8;j++){
               cin>>ch;
               if(ch=='.'){continue;}
               else{st+=ch;}
               }
          }
          cout<<st<<endl;

     }
}