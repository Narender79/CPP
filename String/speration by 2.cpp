#include <iostream>

using namespace std;

int main()
{
	int i;
	string s="ergreagtr";
	int lan= int (s.size());
	for(i=0;i<lan;i++)
	{
		if (s[i]=='e' || s[i]=='E')
		{
			if (i+2<lan && s[i+2]=='g' || s[i+2]=='G')
			{
				cout<<"1"<<"\n";
			}
		}
		if (s[i]=='g' || s[i]=='G')
		{
			if (i+2<lan && s[i+2]=='e' || s[i+2]=='E')
			{
				cout<<"1"<<"\n";
			}
		}
	}
	 
}