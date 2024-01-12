/*
#include <iostream>
#include <queue>
using namespace std;
int grid[105][105];
int n, br, bc;
int dr[4] = {-1, 1, 0, 0}; // up, down, left, right
int dc[4] = {0, 0, -1, 1};

bool legal(int r, int c) {
    if(r <= n && c <= n && r > 0 && c > 0 && grid[r][c] != -1) return true;
    return false;
}
int nr, nc;
void bfs(int r, int c) {
    queue<pair<int, int>> q;
    q.push(make_pair(r, c));
    while(!q.empty()) {
        pair<int, int> f = q.front(); q.pop();
        r = f.first; c = f.second;
        for(int i = 0; i < 4; i++) {
            nr = r + dr[i];
            nc = c + dc[i];
            if(legal(nr, nc)) {
                grid[nr][nc] = grid[r][c] + 1;
                q.push(make_pair(nr, nc));
            }
            
        }
        if(nr == br && nc == bc) {
            return;
        }
    }
}

int main() {
    cin >> n;
    int ar, ac, x;
    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < n + 1; j++) {
            cin >> x; // '.' = 0, 'x' = -1
            grid[i][j] = 0;
            if(x == 'A') {
                ar = i;
                ac = j;
            } else if(x == 'B') {
                br = i;
                bc = j;
            } else if(x == 'x') {
                grid[i][j] = -1;
            }
        }
    }
    bfs(ar, ac);
    cout << grid[br][bc] << endl;
}
*/
