/*
#include <iostream>
using namespace std;
int n, e, quality[1005], dist[1005][1005], dp[1005];
int dfs(int grass) {
    if(dp[grass] == -1) {
        for(int i = 1; i <= n; i++) {
            if(i == grass) continue;
            if(quality[grass] < quality[i]) dp[grass] = max(dp[grass], dfs(i) - dist[grass][i]);
        }
        dp[grass] += quality[grass];
    }
    return dp[grass];
}
int main() {
    cin >> n >> e;
    int d, neighbor;
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= n; j++) {
            dist[i][j] = 1000000000;
        }
    }
    for(int i = 1; i <= n; i++) {
        cin >> quality[i] >> d;
        for(int j = 0; j < d; j++) {
            cin >> neighbor;
            dist[i][neighbor] = dist[neighbor][i] = e;
        }
    }
    for(int k = 1; k <= n; k++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    int biggest = -1;
    for(int i = 1; i <= n; i++) dp[i] = -1;
    for(int i = 1; i <= n; i++) {
        biggest = max(biggest, dfs(i));
    }
    cout << biggest + 1 << endl;
}
*/
