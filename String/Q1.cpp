#include<iostream>
using namespace std;

int main()
{
    int n,x,i;
    int a[n];
    cout<<"enter the value of n: ";
    cin>>n;
    cout<<"enter the value of x: ";
    cin>>x;
    bool flag=false;
    for(i=0;i<n;i++)
    {
        cout<<"enter the value of a["<<i<<"] :";
        cin>>a[n];
    }
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int c;
            c=a[i]+a[j+1];
            if(c==x)
            {
                cout<<"yes";
                flag=true;
                break;
            }
        }
    }
    if(flag==false)
    {
        cout<<"no";
    }
    
}