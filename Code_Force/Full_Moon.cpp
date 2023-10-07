#include<iostream>
#include<vector>
using namespace std;

int main()
{
     long long int n,m,p;
     cin>>n>>m>>p;
     vector<long long int> vec;
     while (n>=m)
     {
          vec.push_back(m);
          m+=p;

     }
     cout<<vec.size()<<endl;
     
}