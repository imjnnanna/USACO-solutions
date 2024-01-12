/*
#include <iostream>
using namespace std;
int n, c;
int coinval[11];
int dp1[10005];
int dp[1005];
int main() {
    cin >> c >> n;
    for(int i = 1; i <= n; i++) cin >> coinval[i];
    for(int i = 1; i <= c; i++) dp[i] = 1000000000;
    dp1[0] = 1;
    dp[0] = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= c; j++) {
            if(dp1[j] > 0 && j + coinval[i] <= c) {
                dp1[j + coinval[i]] += dp1[j];
                dp[j + coinval[i]] = min(dp[j + coinval[i]], dp[j] + 1);
            }
        }
    }
    cout << dp[c] << endl;
}
*/
