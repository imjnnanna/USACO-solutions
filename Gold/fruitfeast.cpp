/*
#include <iostream>
using namespace std;
int t, a, b;
bool dp[5000001][2];
int main() {
    cin >> t >> a >> b;
    dp[0][0] = dp[a][0] = dp[b][0] = true;
    dp[0][1] = dp[a / 2][1] = dp[b / 2][1] = true;
    for(int i = 0; i <= t; i++) { // no water drunken
        if(i + a <= t && dp[i][0]) dp[i + a][0] = dp[i][0];
        if(i + b <= t && dp[i][0]) dp[i + b][0] = dp[i][0];
    }
    for(int i = 0; i <= t; i++) { // if water drunken
        if(i + a <= t) dp[(i + a) / 2][1] = max(dp[i + a][0], dp[(i + a) / 2][1]);
        if(i + b <= t) dp[(i + b) / 2][1] = max(dp[i + b][0], dp[(i + b) / 2][1]);
    }
    for(int i = 0; i <= t; i++) {
        if(i + a <= t && dp[i][1]) dp[i + a][1] = dp[i][1];
        if(i + b <= t && dp[i][1]) dp[i + b][1] = dp[i][1];
    }
    for(int i = t; i >= 0; i--) {
        if(dp[i][0] || dp[i][1]) {
            cout << i << endl;
            break;
        }
    }
}
*/
