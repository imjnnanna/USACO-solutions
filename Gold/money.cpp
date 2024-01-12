/*
#include <iostream>
using namespace std;
long long n, v;
long long coinval[26];
long long dp[10005];
int main() {
    cin >> v >> n;
    for(long long i = 1; i <= v; i++) cin >> coinval[i];
    dp[0] = 1;
    for(long long i = 1; i <= v; i++) {
        for(long long j = 0; j <= n; j++) {
            if(dp[j] > 0 && j + coinval[i] <= n) {
                dp[j + coinval[i]] += dp[j];
            }
        }
    }
    cout << dp[n] << endl;
}
*/
