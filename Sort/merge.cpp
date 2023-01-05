#include <iostream>

using namespace std;

void megsort(int arr[],int s,int mid,int e)
{
    int n1=mid-s+1;
    int n2=e-mid;
    int a1[n1];
    int a2[n2];
    int t1=0;
    int t2=0;
    int m=s;
    for(int i=0;i<n1;i++)
    {
        a1[i]=arr[s+i];
        
    }
    for(int j=0;j<n2;j++)
    {
        a2[j]=arr[mid+1+j];
        
    }
    while(t1<n1 && t2<n2)
    {
        if(a1[t1]<a2[t2])
        {
            arr[m]=a1[t1]; 
            m++;
            t1++;
            
        }
        else
        {
            arr[m]=a2[t2]; 
            m++; 
            t2++;}
    }
    while(t1<n1)
    {
        arr[m]=a1[t1]; 
        m++;
        t1++;
    }
    while(t2<n2)
    {
        arr[m]=a2[t2];
        m++;
        t2++;
    }
    
}



void msort(int arr[],int beg,int end)
{
    if (beg >= end)
        return;
    int mid=(beg+end)/2;
    msort(arr,beg,mid);
    msort(arr,mid+1,end);
    megsort(arr,beg,mid,end);
}

int main()
{
    int arr[]={5,3,4,2,1};
    int len= sizeof(arr)/sizeof(arr[0]);
    msort(arr,0,len);
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<",";
    }
}