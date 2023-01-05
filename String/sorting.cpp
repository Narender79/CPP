#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int i;
    string f="";
    char ar[s.length()];
    for(i=0;i<s.length();i++)
    {
        ar[i] = s[i];
    }
    //Selection Sort
    for(int i = 0; i < s.length(); i++)
    {
        char min = ar[i];
        int pos = i;
        for(int j = i+1; j < s.length(); j++)
        {
            if(ar[j] < min)
            {
                min = ar[j];
                pos = j;
            }
        }
        char temp = ar[i];
        ar[i] = min;
        ar[pos] = temp;
    }
    
    for(int i = 0; i < s.length(); i++)
    {
        cout<<ar[i];
    }
}