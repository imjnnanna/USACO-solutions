/*
#include <iostream>
using namespace std;
struct baler {
    int x, y, r;
} gear[1055];
int n, xt, yt, takeoff, start;
double speed[1055], sum[1055];
bool adj[1055][1055];
bool vis[1055];
void dfs(int a, int b) { // a, b are the gear indices, updating b based on a (first a value is 0 which has speed of 10000)
    speed[b] = speed[a] * gear[a].r / (double) gear[b].r;
    sum[b] = sum[a] + speed[b];
    if(b == takeoff || vis[b]) return;
    vis[b] = true;
    for(int i = 0; i < n; i++) {
        if(adj[b][i] && i != a) dfs(b, i);
    }
}
bool disteq(int i, int j) {
    return (gear[i].r + gear[j].r) * (gear[i].r + gear[j].r) == (gear[i].x - gear[j].x) * (gear[i].x - gear[j].x) + (gear[i].y - gear[j].y) * (gear[i].y - gear[j].y);
}
int main() {
    cin >> n >> xt >> yt;
    for(int i = 0; i < n; i++) {
        cin >> gear[i].x >> gear[i].y >> gear[i].r;
        if(gear[i].x == xt && gear[i].y == yt) takeoff = i;
        if(gear[i].x == 0 && gear[i].y == 0) start = i;
    }
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= n; j++) {
            adj[i][j] = adj[j][i] = disteq(i, j);
            if(i == j) adj[i][j] = false;
        }
    }
    speed[start] = 10000;
    sum[start] = 10000;
    vis[start] = true;
    for(int i = 0; i < n; i++) {
        if(adj[start][i]) dfs(start, i);
    }
    cout << (int) sum[takeoff] << endl;
}
*/
