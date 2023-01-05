#include <iostream>

using namespace std;

int main()
{
    int a,s,sum=0;
    cout<<"enter the value: ";
    cin>>a;
    while(a>0)
    {
        s=a%10;
        a=a/10;
        sum=sum+s;
    }
    cout<<"the answer is: "<<sum;
    
}