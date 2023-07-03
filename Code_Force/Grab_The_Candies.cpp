#include<iostream>
using namespace std;

string result(int a[],int n)
{
    int eve=0;
    int odd=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0){eve+=a[i];}
        else{odd+=a[i];}
    }
    if(eve>odd){return "YES";}
    else{return "NO";}
}

int main()
{
    int tes;
    cout<<"Enter the number of test case you wanted: ";
    cin>>tes;
    for(int i=0;i<tes;i++)
    {
        int len;
        cout<<"Enter the lenght of the array: ";
        cin>>len;
        int arr[len];
        for(int k=0;k<len;k++)
        {
            cout<<"Enter the value of arr["<<k<<"]: ";
            cin>>arr[k];
        }
        cout<<result(arr,len)<<endl;
    }
}