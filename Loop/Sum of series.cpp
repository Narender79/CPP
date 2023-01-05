#include <iostream>

using namespace std;

int main()
{
    int a,s,sum=0;
    int w=0;
    cout<<"enter the value: ";
    cin>>s;
    for(a=1;a<=s;a++)
    {
        sum = sum + a;
        cout<<"the value of sum is: "<<sum<<"\n";
        w = w+sum;
        cout<<"the sum of the series of sum is: "<<w<<"\n";
        
    }
}