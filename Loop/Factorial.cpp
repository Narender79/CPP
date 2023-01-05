#include <iostream>
using namespace std;

int main()
{
    int a,s,d;
    d=1;
    cin>>s;
    for(a=1;a<=s;a++)
    {
        d=d*a;
    }
    cout<<d;
}