#include<iostream>
#include <map>

using namespace std;
// int hashh[26];
int main()
{
    int len;
    cout<<"Enter the length: ";
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    map<int,int>mpp;
    
    for(int i=0;i<len;i++)
    {
        
        mpp[arr[i]]++;
    }
    map<int,int>::iterator it;
    cout<<"Iterator:"<<endl;
    for(it=mpp.begin();it!=mpp.end();it++) cout << it->first << " => " << it->second <<endl;
    cout<<"Auto:"<<endl;
    for(auto it: mpp) cout<<it.first<<": "<<it.second<<endl;
//     int num;
//     cout<<"How many number you wanted: ";
//     cin>>num;
//     while(num--)
//     {
//         int bure;
//         cin>>bure;
//         cout<<"Ans: "<<mpp[bure]<<endl;
//     }
}