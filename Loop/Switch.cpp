#include <iostream>

using namespace std;
int main()
{
    int choice,a,b,c;
    cout<<"add"<<"\n"<<"mul"<<"\n"<<"sub"<<"\n";
    cout<<"enter your choice= ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cin>>a;
        cin>>b;
        c = a+b;
        cout<<c;
        break;
        case 2:
        cin>>a;
        cin>>b;
        c = a*b;
        cout<<c;
        break;
        case 3:
        cin>>a;
        cin>>b;
        c = a-b;
        cout<<c;
        break;
        default: cout<<"invaild choice";
    }
}