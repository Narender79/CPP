#include<iostream>
#include<string>
using namespace std;

int main()
{
     int N=4;
     string arr[]={"geeksforgeeks","geeks","geek","geezer"};
     sort(arr , arr+N);
     string ans = "", initial = arr[0];
     for(string::size_type i = 0;i<initial.length();i++)
     {
          for(int j = 1;j<N;j++)
          {
               if(initial[i] != arr[j][i])
               {
                    if(ans.length() == 0)
                    {
                         cout<<-1<<endl;
                    }
                    else
                    {
                         cout<<ans<<endl;
                    }
               }
          }
          ans += initial[i];
     }
        cout<<ans<<endl;
}

