// #include <iostream>
// using namespace std;
// int value(char r)
// {
// 	if (r == 'I')
// 		return 1;
// 	if (r == 'V')
// 		return 5;
// 	if (r == 'X')
// 		return 10;
// 	if (r == 'L')
// 		return 50;
// 	if (r == 'C')
// 		return 100;
// 	if (r == 'D')
// 		return 500;
// 	if (r == 'M')
// 		return 1000;

// 	return -1;
// }

// int romanToDecimal(string& str)
// {
// 	int res = 0;
// 	for (string::size_type i = 0; i < str.length(); i++) {
// 		int s1 = value(str[i]);

// 		if (i + 1 < str.length()) {
// 			int s2 = value(str[i + 1]);
// 			if (s1 >= s2) {
// 				res = res + s1;
// 			}
// 			else {
// 				res = res + s2 - s1;
// 				i++;
// 			}
// 		}
// 		else {
// 			res = res + s1;

// 		}
// 	}
// 	return res;
// }

// int main()
// {
// 	string str;
// 	cin>>str;
// 	cout<< romanToDecimal(str) << endl;
// }


#include<iostream>
#include<map>b
using namespace std;

int main()
{
     int ans=0;
     string s;
     cin>>s;
     map<char,int> mp;
     mp['I']=1;
     mp['V']=5;
     mp['X']=10;
     mp['L']=50;
     mp['C']=100;
     mp['D']=500;
     mp['M']=1000;
     for(string::size_type i=0;i<s.length();i++)
     {
          if(mp[s[i]]<mp[s[i+1]]){
               ans+=mp[s[i+1]]-mp[s[i]];
               i++;
          }
          else{
               ans+=mp[s[i]];
          }
     }a
     cout<<ans<<endl;
}