#include<iostream>
using namespace std;

int search(int arr[],int n,int tar)
{
    if(n<=0){
        return -1;
    }
    if(arr[n]==tar){return n;}
    return search(arr,n-1,tar);
}


int main()
{
    int ar[]={2,4,3,1,6,8};
    cout<<"Index of the element is :"<<search(ar,5,4)<<endl;
    // if(ans){cout<<"Element is persent";}
    // else{cout<<"Eement is not persent";}

}