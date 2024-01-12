/*
#include <iostream>
using namespace std;
int n, c, size[1005], val[1005];
int dp[1005][5005];
int main() {
    cin >> n >> c;
    for(int i = 1; i <= n; i++) cin >> size[i] >> val[i];
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= c; j++) {
            dp[i][j] = -10000000;
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= c; j++) {
            if(j - size[i] >= 0) dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - size[i]] + val[i]);
            else dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[n][c] << endl;
}
*/
