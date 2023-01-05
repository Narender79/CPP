#include<iostream>
using namespace std;

int main()
{
	int i,c;
	string s = "worwd";
	int lum=s.length();
	for (i = 0; i <lum; i++)//i<5
	{
		c = 0;
		for(int j = 0; j <lum; j++)
		{
			if(s[i]==s[j])
				c++;
		}
		if(c>1)
			cout<<s[i];
	}
}