// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
ll n,k,x;
void solve()
{
    cin>>n>>k>>x;
    if(x!=1)
    {
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=1;i<=n;i++) cout<<1<<' ';
        cout<<endl;
    }
    else//(x==1)
    {
        if(k==1)
        {
            cout<<"NO"<<endl;
        }
        else if(k==2)
        {
            if(n%2==0)
            {
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i=1;i<=n/2;i++) cout<<2<<' ';
                cout<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else//(k>=3)
        {
            if(n%2==0)
            {
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i=1;i<=n/2;i++) cout<<2<<' ';
                cout<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                cout<<3<<' ';
                for(int i=1;i<=(n-3)/2;i++) cout<<2<<' ';
                cout<<endl;
            }
        }
    }
}
int main(){
    ll tt;
    cin>>tt;
    while(tt--) solve();
}
