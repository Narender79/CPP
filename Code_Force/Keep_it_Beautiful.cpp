#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){cin>>arr[i];}
        int j=0;
        bool small=false;
        vector<int> bit;
        bit.push_back(1);
        for(int i=1;i<n;i++)
        {
            if(arr[j]<arr[i] && small==false)
            {
                bit.push_back(1);
            }
            else if(arr[j]>=arr[i]){j=i; bit.push_back(1); small=true;}
            else if(arr[j]<arr[i] && small==true && arr[0]>=arr[i]){
                bit.push_back(1);
            }
            else{
                bit.push_back(0);
            }
        }
        vector<int>::iterator it;
        for(it=bit.begin();it!=bit.end();it++)
        {
            cout<<*it;
        }cout<<endl;

    }
}
