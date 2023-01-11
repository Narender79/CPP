#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,ans,res;
    ans=0;
    cout<<"Enter numbers: ";
    cin>>a;
    // cout<<"second no.: ";
    // cin>>b;
    int temp=a;
    while(true)
    {
        res=a%10;
        ans=ans+pow(res,3);
        a=a/10;
        if(a==0){break;}
    }
    cout<<"This is the answer: "<<ans<<endl;
    if(temp==ans){cout<<"The giving no. is a armstrong no."<<endl;}
    else{cout<<"The giving no. is not a armstrong no."<<endl;}
}