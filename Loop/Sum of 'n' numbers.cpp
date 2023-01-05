#include <iostream>

using namespace std;

int main()
{
    float a;
    int s;
    float sum=0;
    cout<<"enter the value: ";
    cin>>s;
    for(a=1;a<=s;a++)
    {
        cout<<"the values are: "<<1/(a*a)<<"\n";
        sum = sum + 1/(a*a);
        cout<<"the sum of values are: "<<sum<<"\n";
    }
}