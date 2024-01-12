/*
#include <iostream>
#include <cmath>
using namespace std;
long long n, w;
double m;
pair<long long, long long> pole[1005];
double grid[1005][1005], arr[1005];
bool connect[1005][1005], vis[1005];
double dist(pair<long long, long long> a, pair<long long, long long> b) {
    return sqrt((a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second));
}
void dijkstra() {
    arr[1] = 0;
    for(long long i = 2; i <= n; i++) {
        if(connect[1][i]) arr[i] = 0;
        else arr[i] = 1000000000;
    }
    for(long long i = 1; i <= n; i++) {
        long long x = 0;
        for(long long j = 1; j <= n; j++) { // finding the smallest value & index
            if(!vis[j] && (x == 0 || arr[x] > arr[j])) x = j;
        }
        vis[x] = true;
        for(long long j = 1; j <= n; j++) { // update neighbors
            if(!vis[j] && grid[x][j] != 0 && arr[j] > arr[x] + grid[x][j]) {
                if(!connect[x][j]) arr[j] = arr[x] + grid[x][j];
                else arr[j] = arr[x];
            }
        }
    }
}
int main() { // first n lines is the power pole locations; next w lines is the index i, j poles of poles already connected
    cin >> n >> w >> m;
    for(long long i = 1; i <= n; i++) cin >> pole[i].first >> pole[i].second;
    long long a, b;
    for(long long i = 0; i < w; i++) {
        cin >> a >> b;
        grid[a][b] = grid[b][a] = -1;
        connect[a][b] = connect[b][a] = true;
    }
    for(long long i = 1; i <= n; i++) {
        for(long long j = 1; j <= n; j++) {
            if(i == j || grid[i][j] < 0) continue; // if already connected or same pole to pole
            if(dist(pole[i], pole[j]) <= m) grid[i][j] = dist(pole[i], pole[j]);
        }
    }
    for(long long k = 1; k <= n; k++) {
        for(long long i = 1; i <= n; i++) {
            for(long long j = 1; j <= n; j++) {
                connect[i][j] = max(connect[i][j], connect[i][k] && connect[k][j]);
            }
        }
    }
    dijkstra();
    if(arr[n] < 1000000000 && arr[n] >= 0) cout << (long long)(arr[n] * 1000) << endl;
    else cout << -1 << endl;
}
*/
