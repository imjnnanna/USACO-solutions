/*
#include <iostream>
using namespace std;
int best[105][105];
int main() {
    int n, m;
    cin >> n >> m;
    int queries[10005];
    for(int i = 0; i < m; i++) {
        cin >> queries[i];
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> best[i][j];
        }
    }
    for(int k = 1; k <= n; k++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                best[i][j] = min(best[i][j], best[i][k] + best[k][j]);
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < m - 1; i++) {
        ans += best[queries[i]][queries[i + 1]];
    }
    cout << ans << endl;
}
*/
