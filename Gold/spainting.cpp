/*
#include <iostream>
using namespace std;
#define int unsigned long long
int n, m, k, dp[1005][1005];
int dfs(int len, int inrow) {
    if(inrow == k) return 0;
    if(len == n) return 1;
    if(dp[len][inrow] == -1) dp[len][inrow] = dfs(len + 1, inrow + 1) + (m - 1) * dfs(len + 1, 1);
    return dp[len][inrow] % 1000000007;
}
int power(int base, int exp) {
    int ans = 1;
    for(int i = 0; i < exp; i++) {
        ans *= base;
        ans %= 1000000007;
    }
    return ans % 1000000007;
}
main() {
    cin >> n >> m >> k;
    for(int i = 0; i < 1005; i++) {
        for(int j = 0; j < 1005; j++) dp[i][j] = -1;
    }
    cout << (power(m, n) - (m * dfs(1, 1)) % 1000000007 + 1000000007) % 1000000007 << endl;
}
*/
/*
#include <iostream>
using namespace std;
#define int unsigned long long
int dp[1000005], n, m, k;
int power(int base, int exp) {
    int ans = 1;
    for(int i = 0; i < exp; i++) {
        ans *= base;
        ans %= 1000000007;
    }
    return ans % 1000000007;
}
main() {
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i++) {
        if(i < k) dp[i] = (m * dp[i - 1] + m) % 1000000007;
        else dp[i] = (m * dp[i - 1] - ((m - 1) * dp[i - k]) % 1000000007 + 1000000007) % 1000000007;
    }
    cout << (power(m, n) - (dp[n] - dp[n - 1]) + 1000000007) % 1000000007;
}
*/
