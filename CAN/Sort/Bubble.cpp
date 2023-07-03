#include<iostream>
using namespace std;

void sortarr(int *arr,int n)
{
    if(n==0 || n==1) return;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1]){swap(arr[i],arr[i+1]);}
    }
    sortarr(arr,n-1);
    
}

int main()
{
    int a[5]={2,5,1,6,3};
    sortarr(a,5);
    for(int i=0;i<5;i++){cout<<a[i]<<" ";}
}