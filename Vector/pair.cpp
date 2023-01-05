#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int arr[]={10,16,7,14,5,3,12,9};
    vector<pair <int,int> > pa;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
    {
        pa.push_back(make_pair(arr[i],i));
    }
    for(int i=0;i<pa.size();i++)
    {
        cout<<pa[i].first<<" "<<pa[i].second<<"\n";
    }
     cout<<"The capacity of given vector: "<<pa.capacity()<<endl;
    cout<<"The size of given vector: "<<pa.size()<<endl;
}