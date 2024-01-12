/*
#include <iostream>
using namespace std;
int n, m, k;
long long grid[105][105], dp[105][105];
void f(long long x, long long y) {
    for(long long i = x + 1; i <= n; i++) {
        for(long long j = y + 1; j <= m; j++) {
            if(grid[x][y] != grid[i][j]) dp[i][j] += dp[x][y] % 1000000007;
        }
    }
}
int main() {
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> grid[i][j];
        }
    }
    dp[1][1] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            f(i, j);
        }
    }
    cout << dp[n][m] % 1000000007 << endl;
}
*/
