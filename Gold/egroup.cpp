/*
#include <iostream>
#include <cmath>
using namespace std;
int dp[30005][5];
int main() {
    int n;
    cin >> n;
    int cow[n + 5];
    for(int i = 1; i <= n; i++) cin >> cow[i];
    int output = 300000;
    for(int i = 1; i <= n; i++) {
        dp[i][1] = dp[i - 1][1] + (cow[i] != 1);
        dp[i][2] = min(dp[i - 1][1], dp[i - 1][2]) + (cow[i] != 2);
        dp[i][3] = min(dp[i - 1][1], min(dp[i - 1][2], dp[i - 1][3])) + (cow[i] != 3);
    }
    output = min(dp[n][1], min(dp[n][2], dp[n][3]));
    dp[0][1] = dp[0][2] = dp[0][3] = 0;
    for(int i = 1; i <= n; i++) {
        dp[i][3] = dp[i - 1][3] + (cow[i] != 3);
        dp[i][2] = min(dp[i - 1][3], dp[i - 1][2]) + (cow[i] != 2);
        dp[i][1] = min(dp[i - 1][3], min(dp[i - 1][2], dp[i - 1][1])) + (cow[i] != 1);
    }
    output = min(min(dp[n][1], output), min(dp[n][2], dp[n][3]));
    cout << output << endl;
}
*/
