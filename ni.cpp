/*
#include <iostream>
#include <queue>
using namespace std;
int w, h;
int grid[1005][1005];
int twoToFour = -1, ct = 0;
int dr[4] = {-1, 1, 0, 0}; // up, down, left, right
int dc[4] = {0, 0, -1, 1};
bool legalTwoToFour(int r, int c) {
    if(grid[r][c] != 1 && grid[r][c] != 3 && r >= 1 && c >= 1 && r <= h && c <= w) {
        return true;
    }
    return false;
}
bool legalFourToThree(int r, int c) {
    if(grid[r][c] != 1 && grid[r][c] != 4 && r >= 1 && c >= 1 && r <= h && c <= w) {
        return true;
    }
    return false;
}
void bfsFourToThree(int r, int c) {
    queue<pair<int, int>> q;
    q.push(make_pair(r, c));
    while(!q.empty()) {
        pair<int, int> f = q.front(); q.pop();
        r = f.first; c = f.second;
        if(grid[r][c] == 3 && twoToFour != -1) {
            cout << grid[r][c] << endl;
            return;
        }
        for(int i = 0; i < 4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];
            if(legalFourToThree(nr, nc)) {
                grid[nr][nc] = ct + 1;
                q.push(make_pair(nr, nc));
            }
        }
        ct++;
    }
}
void bfsTwoToFour(int r, int c) {
    queue<pair<int, int>> q;
    q.push(make_pair(r, c));
    while(!q.empty()) {
        pair<int, int> f = q.front(); q.pop();
        r = f.first; c = f.second;
        if(grid[r][c] == 4) {
            twoToFour = grid[r][c];
            bfsFourToThree(r, c);
        }
        for(int i = 0; i < 4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];
            if(legalTwoToFour(nr, nc)) {
                grid[nr][nc] = ct + 1;
                q.push(make_pair(nr, nc));
            }
        }
        ct++;
    }
}
int main() {
    cin >> w >> h;
    int br = 0, bc = 0;
    for(int i = 1; i < h + 1; i++) {
        for(int j = 1; j < w + 1; j++) {
            cin >> grid[i][j];
            if(grid[i][j] == 2) {
                br = i;
                bc = j;
            }
        }
    }
    bfsTwoToFour(br, bc);
}
*/
