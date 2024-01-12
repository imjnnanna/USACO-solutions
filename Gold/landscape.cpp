/*
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int dp[1005][1005];
vector<int> a, b;
int n, x, y, z;
void updatedp() {
    for(int i = 0; i <= 1004; i++) {
        for(int j = 0; j <= 1004; j++) {
            dp[i][j] = 1000000000;
        }
    }
    dp[0][0] = 0;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + y); // delete
            dp[i][j + 1] = min(dp[i][j + 1], dp[i][j] + x); // add
            dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + abs(a[i] - b[j]) * z); // move
        }
    }
}
int main() {
    cin >> n >> x >> y >> z;
    int temp1, temp2;
    for (int i = 0; i < n; ++i) {
        cin >> temp1 >> temp2;
        for (int j = 0; j < temp1; j++) a.push_back(i); // push i a number of times
        for (int j = 0; j < temp2; j++) b.push_back(i); // push i b number of times
    }
    updatedp();
    cout << dp[a.size()][b.size()] << endl;
}
*/
