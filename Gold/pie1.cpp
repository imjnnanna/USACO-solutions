/*
#include <iostream>
using namespace std;
int max3(int a, int b, int c) {
    if(a >= b && a >= c) {
        return a;
    } else if(b >= c) {
        return b;
    } else {
        return c;
    }
}
int main() {
    int coins[105][105] = {{0}};
    int dp[105][105] = {{0}};
    int r, c;
    cin >> r >> c;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cin >> coins[i][j];
        }
    }
    for (int j = 1; j <= c; j++) {
        for (int i = 1; i <= j && i <= r; i++) {
            dp[i][j] = coins[i][j] + max3(dp[i - 1][j - 1], dp[i][j - 1], dp[i + 1][j - 1]);
        }
    }
    cout << dp[r][c] << endl;
}
*/
