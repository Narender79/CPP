#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()

{
	string s;
	char st;
	int r=0; 

	for (int i = 0; i < 4; ++i)
	{
		getline(cin,s);
	}
	for (int j = 0; j <4 ; ++j)
	{
		for (int i = 0; i < 4-j; ++i)
		{
			r=(s[i]-(s[i+1]));
			if (r>0)
			{
				st=s[i];
				s[i]=s[j];
				s[j]=st;
			}
		}
	}
	for(int i=0;i<4;i++)
	{
	    cout<<s[i];
	}

}