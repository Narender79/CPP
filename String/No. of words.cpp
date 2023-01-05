//how many words in a statment

#include<iostream>
using namespace std;

int main()
{
	int i;
	int c=0;
	string s;
	cin>>s;
	int lum=int(s.size());
	for (i = 0; i <lum ;i++)
	{
		if (s[i]==' ')
		{
			c++;
		}
	}
	cout<<c+1;

}