/*
#include <iostream>
#include <queue>
using namespace std;
int m, n;
int d[50][50];
struct whateva {
    int lilies = -1;
    int jumps = -1;
    long long ways = 0;
};
int dr[8] = {1, 2, -1, -2, -1, -2, 1, 2};
int dc[8] = {2, 1, 2, 1, -2, -1, -2, -1};
whateva grid[50][50];
bool vis[50][50];
pair<int, int> arr[10000];
int start, ended;
void update(int x, int y, int bl, int bj, long long pways) {
    if (grid[x][y].lilies == -1 || bl < grid[x][y].lilies) {
        grid[x][y].lilies = bl;
        grid[x][y].jumps = bj;
        grid[x][y].ways = pways;
        if (!vis[x][y]) {
            vis[x][y]=true;
            arr[ended].first = x;
            arr[ended].second = y;
            ended++;
        }
        return;
    }
    if (grid[x][y].lilies == bl && bj < grid[x][y].jumps) {
        grid[x][y].lilies = bl;
        grid[x][y].jumps = bj;
        grid[x][y].ways = pways;
        if (!vis[x][y]) {
            vis[x][y]=true;
            arr[ended].first = x;
            arr[ended].second = y;
            ended++;
        }
        return;
    }
    if (grid[x][y].lilies == bl && bj == grid[x][y].jumps) grid[x][y].ways += pways;
}
void direct() {
    int x = arr[start].first;
    int y = arr[start].second;
    int nx, ny;
    for (int i = 0; i < 8; i++) {
        nx = x + dr[i];
        ny = y + dc[i];
        if (nx >= 0 && ny >= 0 && nx < m && ny < n) {
            if (d[nx][ny] != 2) update(nx,ny,grid[x][y].lilies + (d[nx][ny] == 1?0:1), grid[x][y].jumps + 1, grid[x][y].ways);
        }
    }
    vis[x][y] = false;
    start++;
}
int main() {
    pair<int, int> a, b;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> d[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (d[i][j] == 3) {
                d[i][j] = 1;
                a.first = i;
                a.second = j;
            }
            if (d[i][j] == 4) {
                d[i][j] = 1;
                b.first = i;
                b.second = j;
            }
            vis[i][j]=false;
        }
    }
    start = 0;
    ended = 0;
    update(a.first, a.second, 0, 0, 1);
    while (start != ended) direct();
    if (grid[b.first][b.second].lilies == -1) cout << -1 << endl;
    else cout << grid[b.first][b.second].lilies << endl << grid[b.first][b.second].jumps << endl << grid[b.first][b.second].ways << endl;
}
*/
