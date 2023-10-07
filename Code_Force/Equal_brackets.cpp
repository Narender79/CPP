#include<iostream>
#include<vector>
using namespace std;

int barck(string str)
{
    int n=0;
        vector<int> open;
        vector<int> close;
        for(string::size_type i=0;i<str.length();i++)
        {
            if(str[i]=='(')
            {
                n++;
                open.push_back(n);
            }
            else{
                open.push_back(n);
            }
        }
        n=0;
         for(string::size_type i=str.length()-1;i>=0;i--)
        {
            if(str[i]==')')
            {
                n++;
                close.push_back(n);
            }
            else{
            close.push_back(n);}
            
        }
        int ind=str.length()-1;
         for(string::size_type i=0;i<str.length();i++)
        {
            cout<<open[i]<<" "<<close[ind]<<endl;
            if(open[i]==close[ind--]){return i;}
        }
        return open.size();
}

int main()
{
    string str;
    cin>>str;
    cout<<barck(str)<<endl;   
}
/*
( (  ) ) ) ) (
1 2  2 2 2 2 3
4 4  4 3 2 1  0



























string str;
     cin>>str;
       int l = 0;
       int r = str.length()-1;
       while(l<r){
           while(str[l]!='(' && l<r){
               l++;
           }
            while(str[r]!=')' && l<r){
               r--;
           }
           if(l<r){
               l++;
               r--;
           }
       }
       if(l>r || (l==r && str[l]=='(')){
          cout<<l<<endl;
       }
       cout<<l+1<<endl;




int len = str.length();
    int open[len+1], close[len+1];
    int index = -1;
    memset(open, 0, sizeof (open));
    memset(close, 0, sizeof (close));
    open[0] = 0;
    close[len] = 0;
    if (str[0]=='(')
        open[1] = 1;
    if (str[len-1] == ')'){
        close[len-1] = 1;}

    for (int i = 1; i < len; i++)
    {
        if ( str[i] == '(' )
            open[i+1] = open[i] + 1;
        else
            open[i+1] = open[i];
    }
    for (int i = len-2; i >= 0; i--)
    {
        if ( str[i] == ')' )
            close[i] = close[i+1] + 1;
        else
            close[i] = close[i+1];
    }
    if (open[len] == 0)
        return len;
    if (close[0] == 0)
        return 0;

    for (int i=0; i<=len; i++)
        if (open[i] == close[i])
            index = i;

    return index;
*/