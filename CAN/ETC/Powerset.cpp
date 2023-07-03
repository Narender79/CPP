#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> num,vector<int> out,int index,vector<vector<int>>& ans){
    if(index>=num.size()){
        ans.push_back(out);
        return;
    }
    solve(num,out,index+1,ans);

    int output=num[index];
    out.push_back(output);
    solve(num,out,index+1,ans);
}
//baki sab to ase hi h....solve function main h.
int main()
{
    cout<<"x"<<endl;
}


