/*
#include <iostream>
using namespace std;
#define int long long
int dp[1005][1005][2];
int dist(pair<int, int> a, pair<int, int> b) {
    return (a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second);
}
pair<int, int> h[1001], g[1001];
main() {
    int H, G;
    cin >> H >> G;
    for(int i = 1; i <= H; i++) cin >> h[i].first >> h[i].second;
    for(int i = 1; i <= G; i++) cin >> g[i].first >> g[i].second;
    for(int i = 0; i <= H; i++) {
        for(int j = 0; j <= G; j++) {
            dp[i][j][0] = dp[i][j][1] = 10000000000000000;
        }
    }
    dp[1][0][0] = 0;
    for(int i = 1; i <= H; i++) {
        //cout << "i = " << i << endl;
        for(int j = 0; j <= G; j++) {
            //cout << "j = " << j << " ";
            if(i != 1 || j != 0) dp[i][j][0] = min(dp[i - 1][j][1] + dist(h[i], g[j]), dp[i - 1][j][0] + dist(h[i - 1], h[i]));
            if(j != 0) dp[i][j][1] = min(dp[i][j - 1][0] + dist(h[i], g[j]), dp[i][j - 1][1] + dist(g[j - 1], g[j]));
            //cout << dp[i][j][0] << " " << dp[i][j][1] << endl;
        }
    }
    cout << dp[H][G][0] << endl;
} // 1752
*/
