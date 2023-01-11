#include<iostream>
// #include<stack>
using namespace std;
class Stack
{
    public:
    int arr[10];
    int upper;
    int size;
    Stack(int n)
    {
        size=10;
        upper=-1;
    }
    void push(int x)
    {
        if (size>0){arr[++upper]=x;}
        else{cout<<"overflow"<<endl;}
    }
    void pop()
    {
        if(size>0)
        {
            int p=arr[upper--];
            cout<<"pop element is: "<<p<<endl;
        }
        else{cout<<"underflow";}
    }
    int top()
    {
        if(size>0)
        {
            int t=arr[upper];
            return t;
        }
        else{return 0;}
    }
    bool empty()
    {
        if (size<0){return true;}
        else {return false;}
    }
};

int main()
{
    Stack st(2);
    st.push(34);
    st.push(35);
    cout<<st.top()<<endl;
}