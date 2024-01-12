/*
#include <iostream>
#include <algorithm>
using namespace std;
int dp[2][505][2]; // dp[index][exhaustion][previous state of rest(0 = rest, 1 = run)] = maxdis
int main() {
    int n, m;
    cin >> n >> m;
    int dis[n + 5];
    for(int i = 1; i <= n; i++) cin >> dis[i];
    for(int i = 1; i <= n; i++) { // ith minute
        for(int j = 0; j <= i && j <= m; j++) { // exhaustion
            // run
            if(j == 1) dp[1][j][1] = dp[0][j - 1][0] + dis[i];
            else dp[1][j][1] = dp[0][j - 1][1] + dis[i];
            // rest
            if(j == 0) dp[1][j][0] = max(max(dp[0][j + 1][0], dp[0][j + 1][1]), dp[0][j][0]);
            else dp[1][j][0] = max(dp[0][j + 1][0], dp[0][j + 1][1]);
        }
        swap(dp[0], dp[1]);
    }
    cout << dp[0][0][0] << endl;
}
*/
