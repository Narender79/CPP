#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const vector<int>& a, const vector<int>& b) {
    if (a[0] == b[0]) {
        return a[1] > b[1];  // Sort in descending order based on height
    }
    return a[0] < b[0];  // Sort in ascending order based on width
}

int binarySearch(const vector<int>& dp, int target) {
    int left = 0, right = dp.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (dp[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left;
}

int maxEnvelopes(vector<vector<int> > &envelopes) {
    sort(envelopes.begin(), envelopes.end(), compare);

    vector<int> dp;
    for (const vector<int>& envelope : envelopes) {
        int height = envelope[1];
        int idx = binarySearch(dp, height);
        if (idx == dp.size()) {
            dp.push_back(height);
        } else {
            dp[idx] = height;
        }
    }

    return dp.size();
}

int main() {
    vector<vector<int>> envelopes = {{5, 4}, {6, 4}, {6, 7}, {2, 3}};
    cout << maxEnvelopes(envelopes) << endl;  // Output should be 3
    return 0;
}