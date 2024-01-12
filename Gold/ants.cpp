/*
#include <iostream>
#include <algorithm>
using namespace std;
#define int unsigned long long
int t, a, s, b, dp[2][100005], familysize[1001];
main() {
    cin >> t >> a >> s >> b;
    int x;
    for(int i = 0; i < a; i++) {
        cin >> x;
        familysize[x]++;
    }
    dp[0][0] = 1;
    dp[0][familysize[1] + 1] = -1;
    for(int i = 1; i <= t; i++) {
        for(int j = 0; j <= a; j++) {
            if(j > 0) dp[0][j] += dp[0][j - 1];
            dp[0][j] %= 1000000;
            dp[1][j] += dp[0][j];
            dp[1][j] %= 1000000;
            if(j + familysize[i + 1] + 1 <= a) dp[1][j + familysize[i + 1] + 1] -= dp[0][j] - 1000000;
        }
        if(i != t) {
            swap(dp[0], dp[1]);
            for(int j = 0; j <= a; j++) dp[1][j] = 0;
        }
    }
    int ans = 0;
    for(int i = s; i <= b; i++) {
        ans += dp[0][i];
        ans %= 1000000;
    }
    cout << ans << endl;
}
*/
