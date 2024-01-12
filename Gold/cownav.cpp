/*
#include <iostream>
#include <queue>
using namespace std;
int n;
bool grid[21][21];
int dp[21][21][4][21][21][4];
int dr[4] = {0, 1, 0, -1};
int dc[4] = {1, 0, -1, 0};
struct state {
    int r1, r2, c1, c2, d1, d2;
};
bool legal(int x) {
    return x >= 0 && x < n;
}
void bfs(int row1, int col1, int direct1, int row2, int col2, int direct2) {
    queue<state> q;
    state a;
    a.r1 = row1; a.r2 = row2; a.c1 = col1; a.c2 = col2; a.d1 = direct1; a.d2 = direct2;
    q.push(a);
    dp[row1][col1][direct1][row2][col2][direct2] = 0;
    while (!q.empty()) {
        a = q.front();
        q.pop();
        if (dp[a.r1][a.c1][((a.d1 - 1) + 4) % 4][a.r2][a.c2][((a.d2 - 1) + 4) % 4] == 1000000000) {
            a.d1 = ((a.d1 - 1) + 4) % 4;
            a.d2 = ((a.d2 - 1) + 4) % 4;
            q.push(a);
            a.d1 = (a.d1 + 1) % 4;
            a.d2 = (a.d2 + 1) % 4;
        }
        dp[a.r1][a.c1][((a.d1 - 1) + 4) % 4][a.r2][a.c2][((a.d2 - 1) + 4) % 4] = min(1 + dp[a.r1][a.c1][a.d1][a.r2][a.c2][a.d2], dp[a.r1][a.c1][((a.d1 - 1) + 4) % 4][a.r2][a.c2][((a.d2 - 1) + 4) % 4]);
        if (dp[a.r1][a.c1][(a.d1 + 1) % 4][a.r2][a.c2][(a.d2 + 1) % 4] == 1000000000) {
            a.d1 = (a.d1 + 1) % 4;
            a.d2 = (a.d2 + 1) % 4;
            q.push(a);
            a.d1 = ((a.d1 - 1) + 4) % 4;
            a.d2 = ((a.d2 - 1) + 4) % 4;
        }
        dp[a.r1][a.c1][(a.d1 + 1) % 4][a.r2][a.c2][(a.d2 + 1) % 4] = min(1 + dp[a.r1][a.c1][a.d1][a.r2][a.c2][a.d2], dp[a.r1][a.c1][(a.d1 + 1) % 4][a.r2][a.c2][(a.d2 + 1) % 4]);
        int nr1 = a.r1 + dr[a.d1], nc1 = a.c1 + dc[a.d1], nr2 = a.r2 + dr[a.d2], nc2 = a.c2 + dc[a.d2];
        if (a.r1 == n - 1 && a.c1 == n - 1) {
            nr1 = n - 1; nc1 = n - 1;
        }
        if (a.r2 == n - 1 && a.c2 == n - 1) {
            nr2 = n - 1; nc2 = n - 1;
        }
        if(!legal(nr1)) nr1 = a.r1;
        if(!legal(nc1)) nc1 = a.c1;
        if(!grid[nr1][nc1]) {
            nr1 = a.r1; nc1 = a.c1;
        }
        if(!legal(nr2)) nr2 = a.r2;
        if(!legal(nc2)) nc2 = a.c2;
        if(!grid[nr2][nc2]) {
            nc2 = a.c2; nr2 = a.r2;
        }
        if (dp[nr1][nc1][a.d1][nr2][nc2][a.d2] == 1000000000) {
            row1 = a.r1; row2 = a.r2; col1 = a.c1; col2 = a.c2;
            a.r1 = nr1; a.r2 = nr2; a.c1 = nc1; a.c2 = nc2;
            q.push(a);
            a.r1 = row1; a.r2 = row2; a.c1 = col1; a.c2 = col2;
        }
        dp[nr1][nc1][a.d1][nr2][nc2][a.d2] = min(1 + dp[a.r1][a.c1][a.d1][a.r2][a.c2][a.d2], dp[nr1][nc1][a.d1][nr2][nc2][a.d2]);
    }
}
int main() {
    cin >> n;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            char c;
            cin >> c;
            if (c == 'E') grid[i][j] = true;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < 4; k++) {
                for (int l = 0; l < n; l++) {
                    for (int m = 0; m < n; m++) {
                        dp[i][j][k][l][m][0] = dp[i][j][k][l][m][1] = dp[i][j][k][l][m][2] = dp[i][j][k][l][m][3] = 1000000000;
                    }
                }
            }
        }
    }
    bfs(0, 0, 0, 0, 0, 1);
    int ans = 1000000000;
    for (int i = 0; i < 4; i++) ans = min(ans, dp[n - 1][n - 1][i][n - 1][n - 1][(i + 1) % 4]);
    cout << ans << endl;
}
*/
