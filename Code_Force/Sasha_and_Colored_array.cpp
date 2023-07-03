#include <iostream>
using namespace std;

int color(int arr[],int size){
    if(size<=1){
        return 0;
    }
    sort(arr,arr+size);
    int ans=0;
    for(int i=0;i<size/2;i++){ans+=arr[size-1-i]-arr[i];}
    return ans;

    
}

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
}
}