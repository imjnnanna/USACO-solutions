/*
#include <iostream>
#include <queue>
using namespace std;
int m, n, elev[505][505], ans = 1000000000;
bool waypoint[505][505], grid[505][505];
int x[] = {1, 0, 0, -1};
int y[] = {0, 1, -1, 0};
void floodfill(int r, int c, int val) {
    queue<pair<int, int>> q;
    q.push(make_pair(r, c));
    while(!q.empty()) {
        pair<int, int> f = q.front();
        q.pop();
        r = f.first;
        c = f.second;
        for(int i = 0; i < 4; i++) {
            int nr = r + x[i];
            int nc = c + y[i];
            if(nr < m && nc < n && nr >= 0 && nc >= 0 && grid[nr][nc] == false && abs(elev[nr][nc] - elev[r][c]) <= val) {
                grid[nr][nc] = true;
                q.push(make_pair(nr, nc));
            }
        }
    }
}
bool possible(int val) {
    int wayx, wayy;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            grid[i][j] = false;
            if(waypoint[i][j]) {
                wayx = i;
                wayy = j;
            }
        }
    }
    grid[wayx][wayy] = true;
    floodfill(wayx, wayy, val);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(waypoint[i][j] && !grid[i][j]) return false;
        }
    }
    return true;
}
void binarySearch(int l, int r) {
    if(r < l) return;
    int mid = l + (r - l) / 2;
    if (possible(mid)) {
        ans = min(ans, mid);
        return binarySearch(l, mid - 1);
    }
    if (!possible(mid)) return binarySearch(mid + 1, r);
}
int main() {
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> elev[i][j];
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> waypoint[i][j];
        }
    }
    binarySearch(0, 1000000000);
    cout << ans << endl;
}
*/
