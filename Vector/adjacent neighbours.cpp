#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a[]={7, 2 ,5, 3, 1, 5, 6};
    vector <int> vec;
    for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++)
    {
        vec.push_back(a[i]);
    }
    for(int i=0;i<vec.size()-1;i++)
    {
        if(vec[i]<vec[i+1] && vec[i]<vec[i-1])
        {
            cout<<vec[i]<<" ";
        }
    }
}