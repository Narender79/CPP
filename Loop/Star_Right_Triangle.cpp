#include<iostream>
using namespace std;

int main()
{
    int main,want;
    // main=1;
    // cout<<"How much star u wanted: ";
    // cin>>want;
    // while(true)
    // {
    //     if(main==want+1){break;}
    //     for(int i=1;i<=main;i++){cout<<"*";}
    //     cout<<endl;
    //     main++;
    // }
    for(main=1;main<=5;main++)
    {
        for(want=1;want<=main;want++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}