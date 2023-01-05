#include <iostream>

using namespace std;

int main()
{
    int a;
    int r[10];
    int sum=0;
    float avg,n;
    cout<<"enter the value of n: ";
    cin>>n;
    for(a=0;a<n;a++)
    {
        cout<<"enter the "<<a<<" :";
        cin>>r[a];
        sum=sum+r[a];
    }
   
    avg = sum/n;
    cout<<"the avg of the "<<n<<" number is: "<<avg;
}
