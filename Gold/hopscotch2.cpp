/*
#include <iostream>
using namespace std;
int n, m, k;
long long grid[255][255], dp[255][255];
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
            for(int l = i + 1; l <= n; l++) {
                for(int o = j + 1; o <= m; o++) {
                    if(grid[l][o] != grid[i][j]) dp[l][o] += dp[i][j] % 1000000007;
                    dp[l][o] %= 1000000007;
                }
            }
        }
    }
    cout << dp[n][m] % 1000000007 << endl;
}
*/
