#include<iostream>
#include<map>
using namespace std;

int main()
{    
     int n;
     cin>>n;
     int value[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
     string roman[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
     string ans="";
     for(int i=0;i<13;i++)
     {
          while(n>=value[i]){
               ans+=roman[i];
               n-=value[i];
          }
     }
     cout<<ans<<endl;
}
     