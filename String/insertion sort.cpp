#include<iostream>
using namespace std;

int main()
{
	int a[6]={34,24,14,56,67,4};
	int key;
	for(int i=1;i<6;i++)
	{
		key=a[i];
		int j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;

	}
	for (int i = 0; i < 6;i++)
	{
		cout<<a[i]<<",";
	}
}