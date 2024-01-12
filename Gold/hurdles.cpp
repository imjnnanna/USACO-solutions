/*
#include <iostream>
using namespace std;
int best[305][305];
int main() {
    int n, m, t;
    int s, e, h;
    cin >> n >> m >> t;
    for(int i = 0; i < 305; i++) {
        for(int j = 0; j < 305; j++) {
            if(i != j) best[i][j] = 1000000000;
        }
    }
    for(int i = 0; i < m; i++) {
        cin >> s >> e >> h;
        best[s][e] = min(best[s][e], h);
    }
    int queries[40005][2];
    for(int i = 0; i < t; i++) {
        cin >> queries[i][0] >> queries[i][1];
    }
    int a, b;
    for(int k = 1; k <= n; k++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                best[i][j] = min(best[i][j], max(best[i][k], best[k][j]));
            }
        }
    }
    for(int i = 0; i < t; i++) {
        a = queries[i][0];
        b = queries[i][1];
        if(best[a][b] < 1000000000) cout << best[a][b] << endl;
        else cout << -1 << endl;
    }
}
*/
