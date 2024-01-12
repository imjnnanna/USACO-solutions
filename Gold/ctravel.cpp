/*
#include <iostream>
using namespace std;
int n, m, t, startr, startc, endr, endc, dp[105][105][16]; // number of ways to get from (r, c) to (endr, endc) in t secs
bool grid[105][105];
bool legal(int r, int c) {
    return (r >= 0) && (r < n) && (c >= 0) && (c < m) && grid[r][c];
}
int dfs(int r, int c, int sec) {
    if(sec == t && r == endr && c == endc) return 1;
    if(sec == t || !legal(r, c)) return 0;
    if(dp[r][c][sec] == -1) {
        dp[r][c][sec] = dfs(r + 1, c, sec + 1) + dfs(r, c + 1, sec + 1) + dfs(r - 1, c, sec + 1) + dfs(r, c - 1, sec + 1);
    }
    return dp[r][c][sec];
}
int main() {
    cin >> n >> m >> t;
    char c;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> c;
            if(c == '.') grid[i][j] = true;
            for(int k = 0; k <= t; k++) dp[i][j][k] = -1;
        }
    }
    cin >> startr >> startc >> endr >> endc;
    startr--; startc--; endr--; endc--;
    cout << dfs(startr, startc, 0) << endl;
}
*/
