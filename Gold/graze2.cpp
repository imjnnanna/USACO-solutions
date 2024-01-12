/*
#include <iostream>
#include <algorithm>
using namespace std;
int n, s, d, location[1505], dp[2][1505];
int main() {
    cin >> n >> s;
    for (int i = 0; i < n; i++) cin >> location[i];
    sort(location, location + n);
    d = (s - 1) / (n - 1);
    for(int i = 1; i < n; i++) dp[1][i] = 1000000000;
    if(location[0] > 0) dp[1][0] = location[0] - 1;
    for (int i = 1; i < n; i++) {
        swap(dp[0], dp[1]);
        for(int j = 0; j < n; j++) dp[1][i] = 1000000000;
        for (int j = 0; j < n; j++) dp[1][j] = min(dp[0][j], dp[0][max(j - 1, 0)]) + abs(location[i] - (i * d + j + 1));
    }
    cout << dp[1][s - d * (n - 1) - 1] << endl;
}
*/
