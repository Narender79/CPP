#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
     int n;
     cin >> n;
     vector<int> a(n);
     for (int i = 0; i < n; i++) {
          cin >> a[i];
     }
     int mn=INT_MIN;
     if(a[0]!=1){
     for (int i = 0; i < n; i++){
          if(a[i]>mn && a[i]>a[i-1]){
               mn=a[i-1];
               }
          }
     }
     else{
          for (int i = 0; i < n; i++) {
               if (a[i] >= mn){
                    mn = a[i] + 1;
               }
          }
     }
          cout<<"ans: " << mn << endl;
     }
 
    return 0;
}