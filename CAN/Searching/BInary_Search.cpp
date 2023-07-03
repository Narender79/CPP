#include<iostream>
using namespace std;

int Binarysearch(int a[], int front,int last,int tar)
{
    while(front<=last)
    {
        int mid=(front+last)/2;
        if(a[mid]==tar){return mid;}
        else if(a[mid]>tar){last=mid-1;}
        else{front=mid+1;}
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the lenght of the arr: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<<i<<"th arr: ";
        cin>>arr[i];
    }
    int num;
    cout<<"Enter the number you want to find: ";
    cin>>num;
    cout<<Binarysearch(arr,0,n-1,num);
}