/*
#include <iostream>
#include <algorithm>
using namespace std;
int dp[1005][1005];
int length, n, budget;
struct segment {
    int start, len, fun, cost;
};
bool comp(segment a, segment b) {
    return a.start < b.start;
}
segment seg[10005];
int main() {
    cin >> length >> n >> budget;
    for(int i = 1; i <= n; i++) cin >> seg[i].start >> seg[i].len >> seg[i].fun >> seg[i].cost;
    sort(seg + 1, seg + 1 + n, comp);
    for(int i = 1; i <= length; i++) {
        for(int j = 0; j <= budget; j++) {
            dp[i][j] = -1000000000;
        }
    }
    dp[0][0] = 0;
    int maxf = -1;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= budget; j++) {
            if(j - seg[i].cost >= 0) dp[seg[i].start + seg[i].len][j] = max(dp[seg[i].start][j - seg[i].cost] + seg[i].fun, dp[seg[i].start + seg[i].len][j]);
        }
    }
    for(int i = 0; i <= budget; i++) maxf = max(maxf, dp[length][i]);
    cout << maxf << endl;
}
*/
