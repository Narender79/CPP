#include <iostream>
using namespace std;

int vol(string tex)//eagerer
{
	int i;//i=0
	int c = 0;
	int lan = int(tex.size());//lan=7
	for(i=0;i<lan;i++)//i<7
	{
	    
		if (tex[i]=='a' || tex[i]=='i' || tex[i]=='e' || tex[i]== 'o' || tex[i]=='u')//
		{
			c++;
		}
	}
	return c;
}

int main()
{
	string s;
	cin>>s;
	cout<<vol(s);
}