/*
#include <iostream>
using namespace std;
bool answer[10005];
long long int dp[10005][11];
int n, k;
int main() {
    cin >> n >> k;
    dp[0][0] = 1;
    if(k == 1) {
        cout << 1;
        for(int i = 1; i < n; i++) cout << 0;
        return 0;
    }
    for(int i = 1; i < 10005; i++) {
        dp[i][0] = 1;
    }
    for(int i = 1; i < 11; i++) {
        dp[0][i] = 0;
    }
    for(int i = 1; i < 10005; i++) {
        for(int j = 1; j < 11; j++) {
            dp[i][j] += dp[i - 1][j] + dp[i - 1][j - 1];
        }
    }
    int ind;
    while(k > 0) {
        for(ind = 0; ind < 10001; ind++) if(dp[ind][k] >= n) break;
        answer[ind] = true;
        n -= dp[ind - 1][k];
        k--;
    }
    for(ind = 10004; ind >= 0; ind--) {
        if(answer[ind] == true) break;
    }
    for(int i = ind; i >= 1; i--) cout << answer[i];
}
*/
