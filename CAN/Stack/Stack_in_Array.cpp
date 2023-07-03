#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> st1;
    stack<int> st2;
    int arr[8];
    for(int i=0;i<4;i++)
    {
        int n;
        cout<<"Enter the number: ";
        cin>>n;
        st1.push(n);
    }
    for(int i=0;i<4;i++)
    {
        int n;
        cout<<"Enter the number: ";
        cin>>n;
        st2.push(n);
    }
    int t1=0;
    while(t1<4)
    {
        arr[t1]=st1.top();
        st1.pop();
        t1++;
    }
    int t2=7;
    while(t2>3)
    {
        arr[t2]=st2.top();
        st2.pop();
        t2--;
    }

    for(int i=0;i<8;i++) cout<<arr[i]<<endl;
}
