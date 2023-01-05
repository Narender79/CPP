#include <iostream>


using namespace std;

int main()
{
    string a;
    cin>>a;//abc
    int i;
    string sum="";
    for(i=0;i<a.length();i++)//i=o,i<3
    {
        char c;
       c= a[i]+1;
        sum=sum+c;//sum=b,sum=bc,sum=bcd
        
        
    }
    cout<<sum;
}