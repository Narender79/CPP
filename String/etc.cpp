#include<iostream>
using namespace std;

int main()
{
	string s="BcdUijdos";
	int l=s.length();
	
	for (int i = 0; i < l; i++)//i<9
	{
		if (s[i]>='A' && s[i]<='Z')//
		{
		    s[i]+=32;
		}
		else
		{
		    s[i]-=32;
		}
	}
	cout<<s;
}