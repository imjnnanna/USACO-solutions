/*
#include <iostream>
using namespace std;
int dp[100005][25][3]; // 0 = H, 1 = P, 2 = S
int main() {
    int n, k;
    cin >> n >> k;
    int win[n + 1];
    char hi;
    for(int i = 1; i <= n; i++) {
        cin >> hi;
        if(hi == 'H') win[i] = 1;
        else if(hi == 'P') win[i] = 2;
        else win[i] = 0;
    }
    int maxx = 0;
    for(int i = 1; i <= n; i++) { // if 0 switches
        if(win[i] == 0) {
            dp[i][0][0] = dp[i - 1][0][0] + 1;
            dp[i][0][1] = dp[i - 1][0][1];
            dp[i][0][2] = dp[i - 1][0][2];
        } else if(win[i] == 1) {
            dp[i][0][1] = dp[i - 1][0][1] + 1;
            dp[i][0][2] = dp[i - 1][0][2];
            dp[i][0][0] = dp[i - 1][0][0];
        } else {
            dp[i][0][2] = dp[i - 1][0][2] + 1;
            dp[i][0][1] = dp[i - 1][0][1];
            dp[i][0][0] = dp[i - 1][0][0];
        }
        maxx = max(max(dp[i][0][0], maxx), max(dp[i][0][1], dp[i][0][2]));
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= k; j++) {
            if(win[i] == 0) { // stay the same or switch to others and use up a switch
                dp[i][j][0] = max(dp[i - 1][j][0] + 1, max(dp[i - 1][j - 1][1], dp[i - 1][j - 1][2]));
                dp[i][j][1] = max(dp[i - 1][j][1], max(dp[i - 1][j - 1][0] + 1, dp[i - 1][j - 1][2]));
                dp[i][j][2] = max(dp[i - 1][j][2], max(dp[i - 1][j - 1][1], dp[i - 1][j - 1][0] + 1));
            } else if(win[i] == 1) {
                dp[i][j][0] = max(dp[i - 1][j][0], max(dp[i - 1][j - 1][1] + 1, dp[i - 1][j - 1][2]));
                dp[i][j][1] = max(dp[i - 1][j][1] + 1, max(dp[i - 1][j - 1][0], dp[i - 1][j - 1][2]));
                dp[i][j][2] = max(dp[i - 1][j][2], max(dp[i - 1][j - 1][1] + 1, dp[i - 1][j - 1][0]));
            } else { // win[i] == 2
                dp[i][j][0] = max(dp[i - 1][j][0], max(dp[i - 1][j - 1][1], dp[i - 1][j - 1][2] + 1));
                dp[i][j][1] = max(dp[i - 1][j][1], max(dp[i - 1][j - 1][0], dp[i - 1][j - 1][2] + 1));
                dp[i][j][2] = max(dp[i - 1][j][2] + 1, max(dp[i - 1][j - 1][1], dp[i - 1][j - 1][0]));
            }
            maxx = max(max(dp[i][j][0], maxx), max(dp[i][j][1], dp[i][j][2]));
        }
        
    }
    cout << maxx << endl;
}
*/
