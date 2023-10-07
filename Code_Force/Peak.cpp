#include<iostream>
using namespace std;

int main()
{
     int n,s=0,e;
     cin>>n;
     int arr[n];
     e=n-1;
     for(int i=0;i<n;i++){cin>>arr[i];}
     int mid=(s+e)/2;
     while (s<e)
     {
          if(arr[mid]<arr[mid+1]){s=mid+1;}
          else{e=mid;}
          mid=(s+e)/2;
     }
     cout<<s<<endl;
}

/*

        int i;
        for(int i=0;i<n;i++)
        {
            if(i==0 && arr[i]>=arr[i+1] ){return 0;}
            else if(i==n-1 && arr[i]>=arr[i-1]){return n-1;}
            else if(i!=0 && arr[i]>=arr[i+1] && arr[i]>=arr[i-1]){return i;}

*/