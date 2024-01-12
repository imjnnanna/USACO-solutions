/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, arr[100001], sum;
int main() {
    cin >> n >> sum;
    for (int i = 0; i < n; i++) cin >> arr[i];
    int low = 0, high = n, mid, k = 0, cost = 0;
    while (low + 1 < high) {
        mid = (low + high) / 2;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            v.push_back(arr[i] + mid * (i + 1));
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < mid; i++) ans += v[i];
        if (ans <= sum) {
            k = mid;
            cost = ans;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    cout << k << " " << cost << endl;
}
*/
