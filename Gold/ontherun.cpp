/*
#include <iostream>
#include <algorithm>
using namespace std;
int n, l, dp[1005][1005][2], p[1005];
int dfs(int left, int right, bool side) { // 0 = left side, 1 = right side
    if(right == n && left == 0) return 0;
    int a = 1000000000, b = 1000000000;
    if(dp[left][right][side] == -1) {
        if(left > 0){
            if(!side) a = (n - right + left) * (p[left] - p[left - 1]) + dfs(left - 1, right, 0);
            else a = (n - right + left) * (p[right] - p[left - 1]) + dfs(left - 1, right, 0);
        }
        if(right < n) {
            if(side) b = (n - right + left) * (p[right + 1] - p[right]) + dfs(left, right + 1, 1);
            else b = (n - right + left) * (p[right + 1] - p[left]) + dfs(left, right + 1, 1);
        }
        dp[left][right][side] = min(a, b);
    }
    return dp[left][right][side];
}
int main() {
    cin >> n >> l;
    int ind;
    for(int i = 0; i < n; i++) cin >> p[i];
    for(int i = 0; i < 1005; i++) {
        for(int j = 0; j < 1005; j++) dp[i][j][0] = dp[i][j][1] = -1;
    }
    p[n] = l;
    sort(p, p + n + 1);
    for(int i = 0; i <= n; i++) {
        if(p[i] == l) {
            ind = i;
            break;
        }
    }
    cout << dfs(ind, ind, 0) << endl;
}
*/
