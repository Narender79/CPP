#include <iostream>

using namespace std;

int prime(int a)
{
    int q;
    int c;
    c=0;
    for(q=1;q<=a;q++)
    {
        if(a%q==0)
        {
            c++;
        }
    }
    
    if(c==2)
    return true;
    
    else
    return false;
}

int main()
{
    int a,s;
    cout<<"enter the first number: ";
    cin>>a;
    cout<<"enter the second number: ";
    cin>>s;
    while(a<=s)
    {
        if(prime(a))
        {
            cout<<a<<"\n";
        }
        a++;
    }
    
    
}