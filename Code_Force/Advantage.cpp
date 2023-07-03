#include <iostream>

using namespace std;

int scond(int arr[],int len,int great)
{
    int res=-1;
     for(int i=0;i<len;i++)
    {
       if(i!=great && arr[i]==arr[great]){res=i; return res;}
        else if(arr[i]!=arr[great])
        {
            if(res==-1){res=i;}
            else if(arr[i]>arr[res]){res=i;}
        }
    }
    return res;
}

int greatno(int arr[],int len)
{
    int ind,gre=INT_MIN;
    for(int i=0;i<len;i++)
    {
        if(arr[i]>gre){gre=arr[i]; ind=i;}
    }
    return ind;
}

int main()
{
    int main,len,idx,sid;
    cout<<"Enter the main: ";
    cin>>main;
    for(int i=0;i<main;i++)
    {
        cout<<"Enter the length of the array: ";
        cin>>len;
        int arr[len];
        for(int f=0;f<len;f++)
        {
            cout<<"Enter the arr["<<f<<"]: ";
            cin>>arr[f];
        }
        idx=greatno(arr,len);
        // cout<<idx<<endl;
        sid=scond(arr,len,idx);
        if(sid==-1){sid=idx;}
        for(int j=0;j<len;j++)
        {
            if(arr[j]!=arr[idx])
        {
            cout<<" Answer: "<<arr[j]-arr[idx];
        }
        else{
            cout<<" "<<arr[idx]-arr[sid];}
        }                
    }
}