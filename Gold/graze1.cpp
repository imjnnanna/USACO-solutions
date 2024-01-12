/*
#include <iostream>
#include <algorithm>
int n, l, d, location[10005], dp[2][100005];
using namespace std;
int main() {
    cin >> n >> l;
    d = l / (n - 1);
    for (int i = 0; i < n; i++) cin >> location[i];
    dp[1][0] = location[0];
    for(int i = 1; i < n; i++) {
        swap(dp[0], dp[1]);
        for(int j = max(d * i, l - (d + 1) * (n - 1 - i)); j <= (d + 1) * i && j <= l - d * (n - 1 - i); j++) {
            dp[1][j] = 1000000000;
            if(j - d - 1 >= d * (i - 1) && j - d - 1 >= l - (d + 1) * (n - i)) dp[1][j] = dp[0][j - d - 1];
            if(j - d <= (d + 1) * (i - 1) && j - d <= l - d * (n - i)) dp[1][j] = min(dp[1][j], dp[0][j - d]);
            dp[1][j] += abs(location[i] - j);
        }
    }
    cout << dp[1][l] << endl;
}
*/
