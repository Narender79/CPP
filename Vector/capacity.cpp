#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[]={10,16,7,14,5,3,12,9};
    vector<int> vec;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
    {
        vec.push_back(arr[i]);
    }
    vector<int>::iterator it;
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<"\n";
    }
    cout<<"The capacity of given vector: "<<vec.capacity()<<endl;
    cout<<"The size of given vector: "<<vec.size()<<endl;
}
