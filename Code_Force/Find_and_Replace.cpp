#include<iostream>
using namespace std;

bool slove(string s,int len)
{
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j+=2)
        {
            if(s[i]==s[j]){return 0;}
        }
    }
    return 1;
}

int main()
{
    int loop;
    cout<<"Enter the number of loop you want: ";
    cin>>loop;
    while(loop--)
    {
        int len;
        cout<<"Enter the length of the string: ";
        cin>>len;
        string w;
        cout<<"Enter the string: ";
         cin>>w;
        (slove(w,len))?cout<<"Yes"<<endl:cout<<"No"<<endl;
    }
}