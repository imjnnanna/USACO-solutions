/*
#include <iostream>
using namespace std;
int n, dp[250][250], input[250];
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> input[i];
        dp[i][i] = input[i];
    }
    int ans = -1;
    for(int len = 1; len <= n; len++) {
        for(int i = 0; i + len - 1 < n; i++) {
            int j = i + len - 1;
            for(int k = i; k <= j; k++) {
                if(dp[i][k] == dp[k + 1][j]) dp[i][j] = max(dp[i][j], dp[i][k] + 1);
            }
            ans = max(ans, dp[i][j]);
        }
    }
    cout << ans << endl;
}
*/
