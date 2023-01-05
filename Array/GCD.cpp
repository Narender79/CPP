#include<iostream>
using namespace std;

int gcd(int a,int b)//24,18
{
    // cout<<"shekgf";
    int ans;
    while(b!= 0)
    {

        ans=a%b;
        a=b;
        b=ans;
    }
    return a;
}

int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    cout<<gcd(a,b)<<endl;
    //getch();
}
