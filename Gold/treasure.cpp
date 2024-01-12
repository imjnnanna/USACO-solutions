/*
#include <iostream>
#include <cmath>
using namespace std;
int dp[1005][1005], game[1005];
int recurse(int a, int b) {
    if(a == b) return game[a];
    if(dp[a][b] != -1) return dp[a][b];
    int left = game[a] - recurse(a + 1, b);
    int right = game[b] - recurse(a, b - 1);
    dp[a][b] = max(left, right);
    return dp[a][b];
}
int main() {
    int n, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> game[i];
        sum += game[i];
    }
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= n; j++) dp[i][j] = -1;
    }
    cout << (recurse(0, n - 1) + sum) / 2 << endl;
}
 */
/*
#include <iostream>
using namespace std;
int dp[5005][5005], game[5005];
int main() {
    int n, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> game[i];
        sum += game[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = n - 1; j >= i; j--) {
            if(dp[i][j] != 0) continue;
            if(i != 0 && j < n) dp[i][j] = max(game[i] - dp[i - 1][j], game[j] - dp[i][j + 1]);
            else if(i == 0) dp[i][j] = game[j] - dp[i][j + 1];
            else if(j == n - 1) dp[i][j] = game[i] - dp[i - 1][j];
        }
        ans = max(ans, dp[i][i]);
    }
    cout << (dp[0][n - 1] + sum) / 2 << endl;
}
*/
/*
#include <iostream>
#include <algorithm>
using namespace std;
int n, game[5005], p[5005], dp[2][5005];
int main () {
    cin >> n >> game[0];
    p[0] = game[0];
    for (int i = 1; i < n; i++) {
        cin >> game[i];
        p[i] = p[i - 1] + game[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; i + j < n; j++) {
            dp[1][j] = (p[i + j] - p[j]) - min(dp[0][j], dp[0][j + 1]);
        }
        swap(dp[0], dp[1]);
    }
    cout << dp[0][0] << endl;
}
*/
