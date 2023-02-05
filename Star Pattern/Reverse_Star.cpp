#include<iostream>
using namespace std;

int main()
{
    int main,want;
    for(main=0;main<=5;main++)
    {
        for(want=1;want<=5;want++)
        {
            if(want<=main){cout<<" ";}
            else{cout<<"*";}
        }
        cout<<endl;
    }
}