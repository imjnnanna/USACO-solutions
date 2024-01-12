/*
#include <iostream>
using namespace std;
int grid[505][505];
int p, f, c;
bool fav[505];
int main() {
    cin >> p >> f >> c;
    int a, b, cost;
    for(int i = 0; i < f; i++) {
        cin >> a;
        fav[a] = true;
    }
    for(int i = 1; i <= p; i++) {
        for(int j = 1; j <= p; j++) grid[i][j] = 1000000000;
    }
    for(int i = 1; i <= c; i++) {
        cin >> a >> b >> cost;
        if(grid[a][b] != 1000000000) grid[a][b] = grid[b][a] = min(grid[a][b], cost);
        else grid[a][b] = grid[b][a] = cost;
    }
    for(int k = 1; k <= p; k++) {
        for(int i = 1; i <= p; i++) {
            for(int j = 1; j <= p; j++) {
                if(i == j) grid[i][j] = 0;
                grid[i][j] = min(grid[i][j], grid[i][k] + grid[k][j]);
                grid[j][i] = min(grid[j][i], grid[j][k] + grid[k][i]);
            }
        }
    }
    int ans, count, mincount = 1000000000;
    for(int i = 1; i <= p; i++) {
        count = 0;
        for(int j = 1; j <= p; j++) {
            if(fav[j]) count += grid[i][j];
        }
        if(count < mincount) {
            ans = i;
            mincount = count;
        }
    }
    cout << ans << endl;
}
*/
