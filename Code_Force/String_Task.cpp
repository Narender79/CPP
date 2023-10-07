#include<iostream>
#include<vector>
using namespace std;

int main()
{
     string s;
     cin>>s;
     char arr[]={'a','e','i','o','u','y'};
     vector<char> vec;
     bool flag;
     int len=s.length();
     transform(s.begin(), s.end(), s.begin(), ::tolower);
     for(int i=0;i<len;i++){
          flag=true;
          for(int j=0;j<6;j++){
               if(s[i]==arr[j]){
                    flag=false;
                    break;
               }
          }
          if(flag==true){
               vec.push_back('.');
               vec.push_back(s[i]);
          }

     }
     for(int i=0;i<vec.size();i++)
          cout<<vec[i];
     cout<<endl;
}