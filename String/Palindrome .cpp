#include<iostream>
using namespace std;

int main()
{
	int i,c;
	string s;
	getline(cin,s);
	int lan=int(s.length());
	char c1,c2;
	for(i=0;i<lan;i++)
	{
		if (s[i]>='a'&&s[i]<='z')
		{
			c1=s[i];
		}
		if (s[lan-1-i]>='a'&&s[lan-1-i]<='z')
		{
			c2=s[lan-1-i];
		}
	}
	if (c1==c2)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
}