#include<iostream>
using namespace std;

int main()
{
	string s1="geekfor";
	string s2="geeksrocks";
	string s3;
	int i;
	for(i=0;i<s1.length();i++)
	{
		//c=s1;//c=geekfor
		//s1=s2//s1=geeksrocks
		//s2=c;//s2=geekfor
		s3=s1+s2;
	}
	cout<<s3;
}