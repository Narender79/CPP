#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;


string isMostCommonSubsegment(int n, int k, vector<int>& a) {
    unordered_map<int, int> count;
    int maxCount = 0;
    
    for (int i = 0; i < n; i++) {
        count[a[i]]++;
        maxCount = max(maxCount, count[a[i]]);
        
        if (maxCount > (i + 1) / 2) {
            return "YES";
        }
    }
    
    return "NO";
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        string result = isMostCommonSubsegment(n, k, a);
        cout<<"ANS: " << result << endl;
    }
    
    return 0;
}
/*
7
5 4
1 4 3 4 1
4 1
2 3 4 4
5 6
43 5 60 4 2
2 5
1 5
4 1
5 3 3 1
1 3
3
5 3
3 4 1 5 5

*/






/*

int main(){
     int t;
     cin>>t;
     while(t--){
          int n,k;
          cin>>n>>k;
          int arr[n];
          map<int,int> mpp;
          for(int i=0;i<n;i++){cin>>arr[i]; mpp[arr[i]]++;}
          if(n==1){
               cout<<"YES"<<endl;
          }
          else{

          }
     }
}
*/