#include<iostream>
#include<map>
using namespace std;

bool iosmorphic(string s1,string s2)
{
      if(s1.length()!=s2.length()){return false;}
        if(s1.length()==1){return true;}
        map<char,char>chmp,chmp1;
        for(string::size_type i=0;i<s1.length();i++)
        {
            if(chmp.find(s1[i])==chmp.end())
            {
                chmp[s1[i]]=s2[i];
            }
            else{
                if(chmp[s1[i]]!=s2[i])
                {
                    return false;
                    }
            }
        }
        for(string::size_type i=0;i<s1.length();i++)
        {
            if(chmp1.find(s2[i])==chmp.end())
            {
                chmp1[s2[i]]=s1[i];
            }
            else{
                if(chmp1[s2[i]]!=s1[i])
                {
                    return false;
                    }
            }
        }
        return true;
        
}

int main()
{
     string s1,s2;
     cin>>s1>>s2;
    cout<<iosmorphic(s1,s2)<<endl;
}