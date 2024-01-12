/*
#include <iostream>
#include <algorithm>
using namespace std;
int n, m, r;
struct whateva {
    int start, end, eff;
};
int dp[1005];
whateva arr[1005];
bool comp(whateva a, whateva b) {
    return (a.start < b.start);
}
int main() {
    cin >> n >> m >> r;
    for(int i = 1; i <= m; i++) cin >> arr[i].start >> arr[i].end >> arr[i].eff;
    sort(arr + 1, arr + m + 1, comp);
    int ans = 0;
    for(int i = 1; i <= m; i++) {
        int maxj = 0;
        for(int j = 1; j < i; j++) {
            if(arr[j].end + r <= arr[i].start) maxj = max(maxj, dp[j]);
        }
        dp[i] = maxj + arr[i].eff;
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
}
*/
