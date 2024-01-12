/*
#include <iostream>
#include <queue>
using namespace std;
int n, q;
int grid[1005][1005];
bool vis[1005];
void bfs(int node, int distance, int dest) {
    queue<pair<int, int>> q;
    q.push(make_pair(node, distance));
    while(!q.empty()) {
        pair<int, int> f = q.front();
        q.pop();
        node = f.first;
        distance = f.second;
        if(vis[node]) {
            continue;
        }
        vis[node] = true;
        if(node == dest) {
            cout << distance << endl;
            break;
        }
        for(int i = 0; i <= n; i++) {
            if(grid[node][i] > 0) {
                q.push(make_pair(i, distance + grid[node][i]));
            }
        }
    }
}
int main() {
    cin >> n >> q;
    int a, b, l;
    for(int i = 0; i < n - 1; i++) {
        cin >> a >> b >> l;
        grid[a][b] = l;
        grid[b][a] = l;
    }
    for(int i = 0; i < q; i++) {
        for(int j = 0; j < 1005; j++) vis[j] = false;
        cin >> a >> b;
        bfs(a, 0, b);
    }
}
*/
