#include <iostream>

using namespace std;

string name(string st,int len,string tar)
{
    int count=0;
    for(int j=0;j<5;j++)
    {
        for(int k=0;k<5;k++)
        {
            if(tar[j]==st[k])
            {
                count++;
                
            }
            
        }
        if(count==1){count=0;}
        else{return "NO";}
    }
    return "YES";
}

int main()
{
    string main="Timur";
    int loop;
    // cout<<"Enter the number: ";
    cin>>loop;
    for(int i=0;i<loop;i++)
    {
        string s="";
        int len;
        // cout<<"\nEnter the length: ";
        cin>>len;
        cin>>s;
        // for(int k=0;k<len;k++)
        // {
        //     string temp;
        //     // cout<<"Enter the string: ";
        //     cin>>temp;
        //     s=s+temp;
        // }
        if(len==5){cout<<name(main,len,s)<<endl;}
        else{cout<<"NO"<<endl;}
    }
}