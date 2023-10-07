#include<iostream>
#include<map>
using namespace std;

int main()
{
     int n,fir=0,sec=0,thir=0;
     cin>>n;
     int one[n],two[n],thrr[n];
     for(int i=0;i<n;i++){
          cin>>one[i]>>two[i]>>thrr[i];
          fir+=one[i];
          sec+=two[i];
          thir+=thrr[i];
     }
     map<int,int> mpp;
     mpp[fir]=1;
     mpp[sec]=1;
     mpp[thir]=1;
     for(auto x: mpp){
          if(mpp.size()==1 && x.first==0){
          cout<<"YES"<<endl;
     }
     else{
          cout<<"NO"<<endl;
          break;
     }
     }
}