#include<iostream>
using namespace std;

int main()
{
    int test;
    // cout<<"Enter the number of test case you wanted: ";
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int a,b,c;
        // cout<<"Enter numbers: ";
        cin>>a>>b>>c;
        if(a+b==c)
        {
            cout<<"+"<<endl;
        }
        else{cout<<"-"<<endl;}
    }
}