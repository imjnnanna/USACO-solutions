/*
#include <iostream>
#include <cmath>
using namespace std;
int dp[105][105], game[105];
int recurse(int a, int b) {
    if(a == b) return game[a];
    if(dp[a][b] != 0) return dp[a][b];
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
    int diff = recurse(0, n - 1);
    for(int i = 0; i <= sum; i++) {
        for(int j = sum; j >= 0; j--) {
            if(i + j == sum && i - j == diff) cout << i << " " << j << endl;
        }
    }
}
*/
