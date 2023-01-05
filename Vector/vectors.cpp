#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> a;
	a.push_back(3);
	a.push_back(27);
	a.push_back(678);
	//simple
	for (int i=0;i<a.size();i++)
	{
		cout<<a[i]<<"\n";
	}
	//iterator
	vector<int>::iterator t;
	for (t=a.begin();t!=a.end();t++)
	{
		cout<<*t<<",";
	}
	//auto element
	for(auto element:a)
	{
		cout<<"\n"<<element;
	}
}