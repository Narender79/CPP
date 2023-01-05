#include <iostream>
using namespace std;

void sumsub(int x,int y)
{
    int *p=&x;
    int *q=&y;
    int sum=*p+*q;
    cout<<sum<<"\n";
    if (*p>*q) 
    {
        int sub=*p-*q;
        cout<<sub<<"\n";
    }
    else 
    {
        int sub=*q-*p;
        cout<<sub<<"\n";
    }
}

int main()
{
    int a,b;
    cin>>a>>b;
    sumsub(a,b);
}