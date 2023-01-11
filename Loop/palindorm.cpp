#include<iostream>
using namespace std;

int main()
{
    int a,ans,res;
    ans=0;
    cout<<"Enter numbers: ";
    cin>>a;
    int temp=a;
    while(true)
    {
        res=a%10;
        ans=ans*10+res;
        a=a/10;
        if(a==0){break;}
    }
    cout<<"This is the answer: "<<ans<<endl;
    if(temp==ans){cout<<"The giving no. is a palindrom no."<<endl;}
    else{cout<<"The giving no. is not a palindrom no."<<endl;}
}