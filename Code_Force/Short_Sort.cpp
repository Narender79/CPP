/*
6
abc
acb
bac
bca
cab
cba
*/
#include <iostream>
#include <string>
using namespace std;
string can_transform_to_abc(string s) {
    if (s == "abc") {
        return "YES";
    }
    int count = 0;
    for (int i = 0; i < 3; i++) {
        if (s[i] != "abc"[i]) {
            count++;
        }
    }
    if (count == 2) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        cout << can_transform_to_abc(s) << endl;
    }

    return 0;
}
