#include <iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string s="25793";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s;
}
