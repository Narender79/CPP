#include <iostream>

using namespace std;

int main()
{
    string a;
    cin>>a;
    int i;
    string d="";
    for(i=0;i<a.length();i++)
    {
        d=a[i]+d;
        
    }
    cout<<d;
}

//another method

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;//s=hello
    int i=0;
    int j=s.length()-1;//j=5
    while(i<j)//0<5
    {
        char c;
        c=s[i];//c=h
        s[i]=s[j];//h=o,oello.....0=h,1=e,2=l,3=l,4=o
        s[j]=c;//
        i++;
        j--;
    }
    cout<<s;
}