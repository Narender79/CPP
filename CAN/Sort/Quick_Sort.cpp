#include<iostream>
using namespace std;

int pivotnum(int arr[],int low,int high){
    int piv=arr[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++){
        if(arr[j]<piv){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1; 
}

void Quick(int arr[],int s,int e){
    if(s<e){
        int pivot=pivotnum(arr,s,e);
        Quick(arr,s,pivot-1);
        Quick(arr,pivot+1,e);
    }
}

int main(){
    int arr[]={4 ,1 ,3 ,9 ,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    Quick(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}
//Another method->


// #include<iostream>
// using namespace std;

// int pivotnum(int arr[],int sta,int end)
// {
//     int pivt=arr[sta];
//     int cnt=0;
//     for(int i=sta+1;i<=end;i++)
//     {
//         if(arr[i]<=pivt){
//             cnt++;
//         }
//     }
//     int pivtindex=sta+cnt;
//     swap(arr[pivtindex],arr[sta]);
//     int i=sta,j=end;
//     while(i<pivtindex && j>pivtindex)
//     {
//         while(arr[i]<pivt){i++;}
//         while(arr[j]>pivt){j--;}
//         if(i<pivtindex && j>pivtindex)
//         {
//             swap(arr[i++],arr[j--]);
//         }
//     }
//     return pivtindex;
// }

// void fun(int arr[],int fr,int end)
// {
//    if(fr>=end){return;}
//    int pv=pivotnum(arr,fr,end);
//    fun(arr,fr,pv-1);
//    fun(arr,pv+1,end); 
// }

// int main()
// {
//      int arr[]={4,1,3,9,7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     fun(arr,0,n-1);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }