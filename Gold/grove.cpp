/*
#include <iostream>
#include <queue>
using namespace std;
int grid[105][105];
bool vis[105][105];
int R, C, endr, endc;
int dr[8] = {-1, 1, 0, 0, -1, -1, 1, 1}; // up, down, left, right
int dc[8] = {0, 0, -1, 1, -1, 1, -1, 1};
bool legal(int r, int c) {
    if(r <= R && c <= C && r >= 1 && c >= 1 && grid[r][c] != -1 && !vis[r][c]) return true;
    return false;
}
void bfs(int r, int c, int passed) {
    queue<pair<pair<int, int>, int>> q;
    q.push(make_pair(make_pair(r, c), passed));
    int nr, nc;
    while(!q.empty()) {
        pair<pair<int, int>, int> f = q.front();
        q.pop();
        r = f.first.first;
        c = f.first.second;
        passed = f.second;
        for(int i = 0; i < 8; i++) {
            nr = r + dr[i];
            nc = c + dc[i];
            if(!legal(nr, nc)) continue;
            if(grid[nr][nc] == -2 && passed == 1) continue;
            grid[nr][nc] = grid[r][c] + 1;
            q.push(make_pair(make_pair(nr, nc), passed));
        }
        vis[r][c] = true;
        if(nr == endr && nc == endc && passed == 1) return;
    }
}
int main() {
    cin >> R >> C;
    char x;
    int leftmost = 1000000000, leftmostr = 0;
    for(int i = 1; i <= R; i++) {
        for(int j = 1; j <= C; j++) {
            cin >> x; // '.' = 0, 'x' = -1
            grid[i][j] = 0;
            if(x == '*') {
                endr = i;
                endc = j;
            } else if(x == 'X') {
                if(leftmost > j) {
                    leftmost = j;
                    leftmostr = i;
                }
                grid[i][j] = -1;
            }
        }
    }
    for(int i = leftmost - 1; i >= 0; i--) grid[leftmostr][i] = -2;
    for(int i = 1; i <= R; i++) {
        for(int j = 1; j <= C; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    if(grid[endr][endc] != -2) bfs(endr, endc, 0);
    else {
        grid[endr][endc] = 0;
        bfs(endr, endc, 1);
    }
    for(int i = 1; i <= R; i++) {
        for(int j = 1; j <= C; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    cout << grid[endr][endc] << endl;
}
*/
