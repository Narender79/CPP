#include<iostream>
#include <utility>
// #include<bits/stdc++.h>
using namespace std;

pair<int ,int> a,b,c;

inline void read()
{
      cin>>a.first>>a.second;
               cin>>b.first>>b.second;
               cin>>c.first>>c.second;
}

int dist(pair<int ,int> a,pair<int ,int> b) {
	return abs(a.first - b.first) + abs(a.second - b.second);
}

int main()
{
     int t;
     cin>>t;
     while(t--){
          read();
          cout << (dist(a, b) + dist(a, c) - dist(b, c)) / 2 + 1 << endl;

     }
}