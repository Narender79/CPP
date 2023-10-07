#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int xor_value = 0;
        vector<pair<int, int>> operations;
        for(int i = 0; i < n; i++){
            xor_value ^= arr[i];
            cout<<xor_value<<endl;
        }
        if(xor_value == 0){
            cout << "0\n";
        } 
        //xor=3;
     //    else{
     //        cout << "1\n";
     //        int l = 1, r = n;
     //        operations.push_back({l, r});
     //        for (int i = 1; i < 8; i++) {
     //            if ((xor_value ^ arr[i]) != 0) {
     //                r = i + 1;
     //                operations.push_back({l, r});
     //                xor_value ^= arr[i];
     //            } else {
     //                l = i + 1;
     //                r = n;
     //                operations.push_back({l, r});
     //            }
     //        }
          //   cout << operations.size() << endl;
          //   for (const auto& op : operations) {
          //       cout << op.first << " " << op.second << endl;
          //   }
     //    }
    }
}

/*
4
1 2 3 0

ans:
1
1 4
*/
