/*
#include<iostream>
using namespace std;

int main()
{
     long long int n,p,sum=0,d;
     cin>>n>>d>>p;
     long long int f[n];
     for(int i=0;i<n;i++){cin>>f[i];}
     for(int i=0;i<n;i++){
          if(f[i]>p/2 && d>0)
          {
               d--;
               f[i]=0;
          }
          sum+=f[i];
     }
}
*/

#include <iostream>
#include<vector>
using namespace std;

int main() {
  int n,d,k;
  long long p;
  cin>>n>>d>>p;

  vector<long long>f(n),s(n);
  
  for(int i=0;i<n;i++){
     cin>>f[i];
  }
  
/*
5 2 10
7 1 6 3 6
*/
  sort(f.begin(),f.end());
  
/*
5 2 10
1 3 6 6 7
*/
  s[0]=f[0];//s[0]=1
  
  for(int i=0;i<n-1;i++){
     s[i+1]=s[i]+f[i+1];
  }
/*
s[1]=4
s[2]=10
s[3]=16
s[4]=21
*/

  k=(n+d-1)/d;//k=3
  
  long long ans=p*k;//30
  
  for(int i=0;i<k;i++){
    ans=min(ans,s[n-1-(i*d)]+(p*i));
  }
/*
1) 30,21_____ans=21
2) 21,20_____ans=20
3) 20,21_____ans=20
*/
  cout<<ans<<endl;
}
