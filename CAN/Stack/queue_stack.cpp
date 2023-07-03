#include<iostream>
#include<stack>
using namespace std;

class Que
{
    stack<int> s1,s2;
    public:
    void push(int x){s1.push(x);}
    int pop()
    {
        if(s1.empty() and s2.empty())
        {
            return -1;
        }
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        int x=s2.top();
        return x;
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        int y=s1.top();
        return y;
    }

};


int main()
{
    Que temp;
    temp.push(55);
    temp.push(31);
    temp.push(52);
    temp.push(19);
    temp.push(12);
    cout<<temp.pop()<<endl;
}