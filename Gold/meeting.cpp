/*
#include <iostream>
using namespace std;
int bessie[105][105], elsie[105][105];
bool dp[105][10005][2];
int n, m;
void dfs(int field, int t, bool cow) {
    if(dp[field][t][cow] || t > 10000) return;
    dp[field][t][cow] = true;
    for(int i = 0; i < n; i++) {
        if(i == field) continue;
        if(cow == 0 && bessie[field][i] > 0) dfs(i, t + bessie[field][i], 0);
        if(cow == 1 && elsie[field][i] > 0) dfs(i, t + elsie[field][i], 1);
    }
}
int main() {
    cin >> n >> m;
    int a, b;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        cin >> bessie[a - 1][b - 1] >> elsie[a - 1][b - 1];
    }
    dfs(0, 0, 0);
    dfs(0, 0, 1);
    for(int i = 1; i <= 10000; i++) {
        if(dp[n - 1][i][0] && dp[n - 1][i][1]) {
            cout << i << endl;
            return 0;
        }
    }
    cout << "IMPOSSIBLE" << endl;
}
*/
