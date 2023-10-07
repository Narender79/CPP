#include <iostream>
#include<map>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,plat=1,tme;
        cin>>n;
        map<int,int>mtime;
        for(int i=0;i<(n*2);i++){ cin>>tme; mtime[tme]++;}
        for(auto i: mtime)
        {
            plat=(i.second>plat)? i.second:plat;
        }
        cout<<plat<<endl;
    }
}
