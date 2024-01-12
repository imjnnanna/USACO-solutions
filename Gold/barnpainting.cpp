/*
#include <iostream>
#include <vector>
using namespace std;
long long n, k, dp[100005][5], color[100005];
vector<long long> connect[100005];
long long dfs(int ind, int col, int parent) {
    if(color[ind] != 0 && color[ind] != col) return 0;
    if(dp[ind][col] == -1) {
        long long ans = 1;
        for(int i: connect[ind]) {
            if(i == parent) continue;
            if(col == 1) ans *= (dfs(i, 2, ind) + dfs(i, 3, ind)) % 1000000007;
            else if(col == 2) ans *= (dfs(i, 1, ind) + dfs(i, 3, ind)) % 1000000007;
            else ans *= (dfs(i, 1, ind) + dfs(i, 2, ind)) % 1000000007;
            ans %= 1000000007;
        }
        dp[ind][col] = ans;
    }
    return dp[ind][col];
}
int main() {
    cin >> n >> k;
    int a, b;
    for(int i = 0; i < n - 1; i++) {
        cin >> a >> b;
        connect[a - 1].push_back(b - 1);
        connect[b - 1].push_back(a - 1);
    }
    for(int i = 0; i < k; i++) {
        cin >> a;
        cin >> color[a - 1];
    }
    for(int i = 0; i <= n; i++) dp[i][0] = dp[i][1] = dp[i][2] = dp[i][3] = -1;
    cout << (dfs(0, 1, -1) + dfs(0, 2, -1) + dfs(0, 3, -1)) % 1000000007 << endl;
}
*/
