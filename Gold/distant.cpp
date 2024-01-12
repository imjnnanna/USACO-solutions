/*
#include <iostream>
#include <queue>
using namespace std;
bool grid[35][35];
int n, a, b;
int arr[35][35];
bool vis[35][35];
priority_queue<pair<int, pair<int, int>>> edge;
bool legal(int x, int y) {
    if(x <= n && y <= n && x >= 1 && y >= 1) return true;
    return false;
}
void dijkstra(int sx, int sy) {
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= n; j++) {
            arr[i][j] = 1000000000;
            vis[i][j] = false;
        }
    }
    arr[sx][sy] = 0;
    edge.push(make_pair(0, make_pair(sx, sy)));
    while(!edge.empty()) {
        pair<int, pair<int, int>> x = edge.top();
        edge.pop();
        cout << "cost = " << x.first << ", (" << x.second.first << ", " << x.second.second << ")" << endl;
        if(vis[x.second.first][x.second.second]) continue;  x.second = current node, x.first = current node's weight * -1
        if(!legal(x.second.first, x.second.second)) continue;
         run through all of node's neighbors
        if(!vis[x.second.first + 1][x.second.second]) {
            if(grid[x.second.first + 1][x.second.second] == grid[x.second.first][x.second.second]) {
                arr[x.second.first + 1][x.second.second] = min(arr[x.second.first + 1][x.second.second], a + arr[x.second.first][x.second.second]);
                edge.push(make_pair(-arr[x.second.first + 1][x.second.second], make_pair(x.second.first + 1, x.second.second)));
            } else {
                arr[x.second.first + 1][x.second.second] = min(arr[x.second.first + 1][x.second.second], b + arr[x.second.first][x.second.second]);
                edge.push(make_pair(-arr[x.second.first + 1][x.second.second], make_pair(x.second.first + 1, x.second.second)));
            }
        }
        if(!vis[x.second.first - 1][x.second.second]) {
            if(grid[x.second.first - 1][x.second.second] == grid[x.second.first][x.second.second]) {
                arr[x.second.first - 1][x.second.second] = min(arr[x.second.first - 1][x.second.second], a + arr[x.second.first][x.second.second]);
                edge.push(make_pair(-arr[x.second.first - 1][x.second.second], make_pair(x.second.first - 1, x.second.second)));
            } else {
                arr[x.second.first - 1][x.second.second] = min(arr[x.second.first - 1][x.second.second], b + arr[x.second.first][x.second.second]);
                edge.push(make_pair(-arr[x.second.first - 1][x.second.second], make_pair(x.second.first - 1, x.second.second)));
            }
        }
        if(!vis[x.second.first][x.second.second + 1]) {
            if(grid[x.second.first][x.second.second + 1] == grid[x.second.first][x.second.second]) {
                arr[x.second.first][x.second.second + 1] = min(arr[x.second.first][x.second.second + 1], a + arr[x.second.first][x.second.second]);
                edge.push(make_pair(-arr[x.second.first][x.second.second + 1], make_pair(x.second.first, x.second.second + 1)));
            } else {
                arr[x.second.first][x.second.second + 1] = min(arr[x.second.first][x.second.second + 1], b + arr[x.second.first][x.second.second]);
                edge.push(make_pair(-arr[x.second.first][x.second.second + 1], make_pair(x.second.first, x.second.second + 1)));
            }
        }
        if(!vis[x.second.first][x.second.second - 1]) {
            if(grid[x.second.first][x.second.second - 1] == grid[x.second.first][x.second.second]) {
                arr[x.second.first][x.second.second - 1] = min(arr[x.second.first][x.second.second - 1], a + arr[x.second.first][x.second.second]);
                edge.push(make_pair(-arr[x.second.first][x.second.second - 1], make_pair(x.second.first, x.second.second - 1)));
            } else {
                arr[x.second.first][x.second.second - 1] = min(arr[x.second.first][x.second.second - 1], b + arr[x.second.first][x.second.second]);
                edge.push(make_pair(-arr[x.second.first][x.second.second - 1], make_pair(x.second.first, x.second.second - 1)));
            }
        }
        vis[x.second.first][x.second.second] = true;
    }
}
int main() {
    cin >> n >> a >> b;
    char x;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> x;
            if(x == '(') grid[i][j] = 0;
            else grid[i][j] = 1;
        }
    }
    int ans = -1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            dijkstra(i, j);
            for(int k = 1; k <= n; k++) {
                for(int l = 1; l <= n; l++) {
                    ans = max(ans, arr[k][l]);
                }
            }
        }
    }
    cout << ans << endl;
}
*/
