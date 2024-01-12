/*
#include <iostream>
char grid[51][51];
/*
int mv = 0, r, c, mn = 2500;
int kr[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int kc[8] = {-1, 1, 2, 2, 1, -1, -2, -2};
int ro[4] = {-2, 0, 2, 0};
int co[4] = {0, 2, 0, -2};
bool legal(int row, int col) {
    bool ean = true;
    if(row < 1 || col < 1 || row > r || col > c) ean = false;
    return ean;
}
void findmoves(int row, int col) {
    if(mv % 2 == 1) { // Knight - odd moves
        for(int i = 0; i < 8; i++) {
            int nr = row + kr[i];
            int nc = col + kc[i];
            if(legal(nr, nc)) {
                findmoves(nr, nc);
                mv++;
            }
        }
    } else { // Other - even moves
        for(int i = 0; i < 4; i++) {
            int nr = r + ro[i];
            int nc = c + co[i];
            if(legal(nr, nc)) {
                findmoves(nr, nc);
                mv++;
            }
        }
    }
}
int main() {
    int br, bc, cr, cc;
//    cin >> r >> c >> br >> bc >> cr >> cc;
    r = 4, c = 5, br = 4, bc = 1, cr = 4, cc = 3;
    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <= c; j++) {
            if(i == br && j == bc) {
                grid[i][j] = 'B';
            } else if(i == cr && j == cc) {
                grid[i][j] = 'C';
            } else {
                grid[i][j] = '.';
            }
        }
    }
    for(int i = 0; i < r * c; i++) {
        mv = 0;
        findmoves(br, bc);
        if(mn > mv) mn = mv;
    }
    cout << mn << endl;
}
*/
/*
Breadth-First Search
Dijkstra Algorithm

queue:
1) pop() - gets front of queue
2) push() - adds to the back of the queue
*/

/*
#include <queue>
using namespace std;
int endR, endC;
int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1};

bool legal(int r, int c) {
    return true;
}

void bfs(int r, int c) {
    queue<pair<int, int>> q;
    q.push(make_pair(r, c));
    while(!q.empty()) {
        grid[r][c] = 0;
        pair<int, int> f = q.front(); q.pop();
        r = f.first; c = f.second;
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
*/
