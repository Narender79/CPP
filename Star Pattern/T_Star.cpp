#include<iostream>
using namespace std;

int main()
{
    // int k=0;
    for(int i=1;i<=9;i++)
    {
        // i<=5?k++:k--;
        for(int j=1;j<=9;j++)
        {
            if(i==1 || j==5){cout<<"*";}
            else{cout<<" ";}
        }
        cout<<endl;
    }
}
