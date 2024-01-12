/*
#include <iostream>
using namespace std;
int n, h, w[505];
bool dp[505][45005];
int main() {
    cin >> h >> n;
    for(int i = 1; i <= n; i++) {
        cin >> w[i];
        dp[0][w[i]] = true;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= h; j++) {
            if(j - w[i] >= 0) dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]]);
            else dp[i][j] = dp[i - 1][j];
        }
    }
    int maxx = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= h; j++) {
            if(dp[i][j] == true) maxx = max(maxx, j);
        }
    }
    cout << maxx << endl;
}
*/
