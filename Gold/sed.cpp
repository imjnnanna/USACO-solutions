/*
#include <iostream>
using namespace std;
int dp[1005][1005]; // dp[i][j] = minimum steps to change a[1...i] to b[1...j]
int main () {
    string a = " ", b = " ", x, y;
    cin >> x >> y;
    a += x;
    b += y;
    for(int i = 0; i < a.length(); i++) {
        for(int j = 0; j < b.length(); j++) {
            if(i == 0) dp[i][j] = j;
            if(j == 0) dp[i][j] = i;
        }
    }
    for(int i = 1; i < a.length(); i++) {
        for(int j = 1; j < b.length(); j++) {
            if(a[i] == b[j]) {
                dp[i][j] = min(dp[i - 1][j] + 1, min(dp[i][j - 1] + 1, dp[i - 1][j - 1])); // delete, insert, replace
            } else {
                dp[i][j] = min(dp[i - 1][j] + 1, min(dp[i][j - 1] + 1, dp[i - 1][j - 1] + 1));
            }
        }
    }
    cout << dp[a.length() - 1][b.length() - 1] << endl;
}
*/
