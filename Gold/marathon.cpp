/*
#include <iostream>
#include <cmath>
using namespace std;
int n, k;
int dp[505][505];
pair<int, int> num[505];
int main() {
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> num[i].first >> num[i].second;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= k; j++) {
            dp[i][j] = 1000000000;
        }
    }
    dp[1][0]=0;
    for(int i = 2; i <= n; i++){
        for(int j = 0; j < i - 1 && j <= k; j++) {
            for(int l = i - 1; i - l - 1 <= j && l; l--) {
                dp[i][j] = min(dp[i][j], dp[l][j - (i - l - 1)] + abs(num[i].first - num[l].first) + abs(num[i].second - num[l].second));
            }
        }
    }
    cout << dp[n][k] << endl;
}
*/
