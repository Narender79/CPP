#include<iostream>
using namespace std;



int main()
{
    int a[10]={89,67,33,12,4,23,0,34,6,1};
    int i;
    for(i=0;i<10;i++)
    {
       for(int j=i+1;j<10;j++)
       {
           if(a[i]>a[j])
           {
               swap(a[i],a[j]);
           }
       }
    }
    for(int i=0;i<10;i++)
    cout<<a[i]<<",";
}