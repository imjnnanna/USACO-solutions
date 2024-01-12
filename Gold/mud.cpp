/*
#include <queue>
#include <iostream>
using namespace std;
int endR, endC;
int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1};
int grid[1001][1001];
bool legal(int r, int c) {
    if(r >= 0 && c >= 0 && r <= 1000 && c <= 1000 && grid[r][c] != -1) return true;
    return false;
}
void bfs(int r, int c) {
    queue<pair<int, int>> q;
    q.push(make_pair(r, c));
    while(!q.empty()) {
        grid[r][c] = 0;
        pair<int, int> f = q.front();
        q.pop();
        r = f.first;
        c = f.second;
        if(r == endR && c == endC) cout << grid[endR][endC] << endl;
        for(int i = 0; i < 4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];
            if(legal(nr, nc)) {
                grid[nr][nc] = grid[r][c] + 1;
                q.push(make_pair(nr, nc));
            }
        }
    }
}
int main() {
    int x, y, n;
    cin >> endR >> endC >> n;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        x += 500;
        y += 500;
        grid[x][y] = -1;
    }
    bfs(500, 500);
}
*/
