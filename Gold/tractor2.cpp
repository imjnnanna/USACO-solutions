/*
#include <iostream>
#include <queue>
using namespace std;
bool vis[505][505];
int n, grid[505][505];
bool legal(int r, int c) {
    return r >= 0 && c >= 0 && r < n && c < n && !vis[r][c];
}
bool possible(int h) {
    int farm = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) vis[i][j] = false;
    }
    queue<pair<int, int>> q;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(vis[i][j]) continue;
            farm = 0;
            q.push(make_pair(i, j));
            while(!q.empty()) {
                pair<int, int> f = q.front();
                q.pop();
                int r = f.first, c = f.second;
                if(vis[r][c]) continue;
                vis[r][c] = true;
                farm++;
                if(legal(r + 1, c) && abs(grid[r + 1][c] - grid[r][c]) <= h) q.push(make_pair(r + 1, c));
                if(legal(r - 1, c) && abs(grid[r - 1][c] - grid[r][c]) <= h) q.push(make_pair(r - 1, c));
                if(legal(r, c + 1) && abs(grid[r][c + 1] - grid[r][c]) <= h) q.push(make_pair(r, c + 1));
                if(legal(r, c - 1) && abs(grid[r][c - 1] - grid[r][c]) <= h) q.push(make_pair(r, c - 1));
            }
            if(farm >= (n * n + 1) / 2) return true;
        }
    }
    return false;
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) cin >> grid[i][j];
    }
    int best = 1000000000;
    int l = 0, r = 1000000;
    while(r >= l) {
        int mid = (l + r) / 2;
        if(possible(mid)) {
            best = min(best, mid);
            r = mid - 1;
        } else l = mid + 1;
    }
    cout << best << endl;
}
*/
