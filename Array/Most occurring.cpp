#include <iostream>

using namespace std;

int main()
{
   int a[5]={34,45,78,34,56};
   int max=0;
   int t,m=-1;
   for(int i=0;i<5;i++)
   {
       int ctr=0;
       for(int j=i+1;j<5;j++)
       {
           if(a[i]==a[j])
           {
               ctr++;
           }
       }
       if(t>max)
           {
               max=t;
               m=a[i];
           }
   }
   cout<<"the most occurring element :"<<m;
    
}