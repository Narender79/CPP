#include <iostream>
using namespace std;

int main()
{
    int a,s,d,f;
    cout<<"enter the first number: ";
    cin>>a;
    cout<<"enter the sescond number: ";
    cin>>s;
    for(d=1;d<=a && d<=s;d++)
    {
        if(a%d==0 && s%d==0)
        {
            f=d;
        }
        cout<<"the answer is: "<<f<<"\n";
    }
}