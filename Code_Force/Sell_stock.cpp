#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& pr) {
        int mn=INT_MAX;
        int ind=0,num=0,mx=0;
         if(is_sorted(pr.begin(),pr.end(),greater<int>())){return 0;}
        for(int i=0;i<pr.size()-1;i++)
        {
            if(mn>pr[i]){ mn=pr[i];}
            num=pr[i]-mn;
            if(mx<num){mx=num;}
        }
        return mx;
}

int main()
{
     vector<int> v;
     int n,m;
     cin>>n;
     for(int i=0;i<n;i++){
     cin>>m; v.push_back(m);}
     cout<<maxProfit(v)<<endl;
    
}
