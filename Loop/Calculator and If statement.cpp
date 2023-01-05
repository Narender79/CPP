#include <iostream>

using namespace std;

int add(int e,int y)
{
    int q;
    q = e+y;
    return q;
}
int sub(int w,int r)
{
    int t;
    t = w-r;
    return t;
}
int mul(int u,int o)
{
    int g;
    g = u*o;
    return g;
}
int dvi(int h,int j)
{
    int d;
    d = h/j;
    return d;
}

int main()
{
        int x,a,b;
        cout<<"enter the value of x";
        cin>>x;
    cout<<"enter the value ";
    cin>>a;
    cout<<"enter the second value ";
    cin>>b;
    
     if(x == 1)
 {
     cout<<add(a,b);
 }
 else if(x == 2)
 {
     cout<<sub(a,b);
 }
 else if(x == 3)
 {
     cout<<mul(a,b);
 }
 else if(x == 4)
 {
     cout<<dvi(a,b);
}
 

}