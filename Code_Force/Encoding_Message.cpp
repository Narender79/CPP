#include <iostream>
using namespace std;

string alpha(string word,int num)
{
   for(int i = 0; i < num; i++)
	{
	    int tempnum = 0;
	    if(int(word[i]) <= 109)
	    {
	        tempnum = int(word[i]) - 97;
	        word[i] = char(122 - tempnum);
	    }
	    else if(int(word[i]) >= 110)
	    {
	        tempnum = 122 - int(word[i]);
	        word[i] = char(97 + tempnum);
	    }
	}
    return word;
}

string swap(string st,int len)
{
   if(len%2==0)
   {
        for(int i=0;i<len;i+=2)
    {
        char ch=st[i+1];
        st[i+1]=st[i];
        st[i]=ch;
    }
     return alpha(st,len);
   }
   else{
        for(int i=0;i<len-1;i+=2)
    {
        char ch=st[i+1];
        st[i+1]=st[i];
        st[i]=ch;
    }
    return alpha(st,len);
   }
}

int main() 
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        cout<<swap(s,n)<<endl;
    }
}
