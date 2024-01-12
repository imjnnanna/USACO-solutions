/*
#include <iostream>
using namespace std;
int n, p[405], dist[405][405], dp[405];
int dfs(int booth) {
    if(dp[booth] == 0) {
        dp[booth] = 1;
        for(int i = 0; i < n; i++) {
            if(i == booth) continue;
            if(p[booth] + dist[booth][i] <= p[i]) dp[booth] = max(dp[booth], dfs(i) + 1);
        }
    }
    return dp[booth];
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> p[i];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) cin >> dist[i][j];
    }
    int big = -1;
    for(int i = 1; i < n; i++) {
        if(dist[0][i] <= p[i]) big = max(big, dfs(i));
    }
    big = max(big, dfs(0));
    cout << big << endl;
}
*/
