#include <iostream>

using namespace std;

int main()
{
   int a,s,d;
   d=0;
   cout<<"enter the number: ";
   cin>>s;
   for(a=1;a<=s;a++)
   {
       if(s%a==0)
       {
           d++;
       }
   }
   if(d==2)
   {
       cout<<"the given number is prime"<<"\n";
   }
   else{
       cout<<"is not a prime "<<"\n";
   }
   
}