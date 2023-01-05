#include <iostream>

using namespace std;

int main()
{
    int a[5];
    int f=0;
    int s=0;
    int t=0,i;
    for(i=0;i<5;i++)
    {
        cout<<"enter the a["<<i<<"] :";
        cin>>a[i];
        if(a[i]>f)
        {
            t=s;
            s=f;
            f=a[i];
        }
        else if(a[i]>s)
        {
            t=s;
            s=a[i];
        }
        else if(a[i]>t)
        {
            t=a[i];
        }
    }
    cout<<"the first max no. is: "<<f<<"\n"<<"the sceond is: "<<s<<"\n"<<"the third is: "<<t;
    
}