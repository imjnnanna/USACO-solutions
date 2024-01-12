/*
#include <iostream>
using namespace std;
int n, k, mod = 5000011;
int dp[100005];
int main() {
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        if(i - 1 < 1) {
            dp[i] += 2;
        } else if(i - k - 1 < 1 && i - 1 > 0) {
            dp[i] += dp[i - 1] + 1;
        } else {
            dp[i] += dp[i - 1] + dp[i - k - 1];
        }
        dp[i] %= mod;
    }
    cout << dp[n] << endl;
}
*/
