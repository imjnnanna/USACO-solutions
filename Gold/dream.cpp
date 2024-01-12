// function that takes in what r & column you're at, direction you're trying to move to, if bessie smells, if she's purple
// so you only have to do boundary check exactly once!
// if statement: if red - return
// if blue, smell is zero - return
// if purple, add it to q with same direction, remove smell
// orange - add to q with smell being orange
/*
#include <iostream>
using namespace std;
int front, back, n, m;
int red = 0, pink = 1, orange = 2, blue = 3, purple = 4;
int grid[1005][1005], q[4000005], dist[4000005];
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};
void step(int r, int c, int direct, int smell, int d, bool ispurple) {
    int nr = r + dr[direct];
    int nc = c + dc[direct];
    if(nr >= 0 && nr < n && nc >= 0 && nc < m) { // in bounds
        if(grid[nr][nc] == red || (grid[nr][nc] == blue && smell == 0)) {
            if(ispurple) for (int i = 0; i < 4; i++) step(r, c, i, 0, d, false);
            return;
        }
        int add = smell;
        if(grid[nr][nc] == purple) add = direct;
        if(grid[nr][nc] == orange) add = 1;
        int key = nr * m * 4 + nc * 4 + add;
        if (dist[key] != 1000000000) return; // never re-update
        dist[key] = d;
        q[back] = key;
        back++;
    } else { // out of bounds
        if(ispurple) {
            for (int i = 0; i < 4; i++) step(r, c, i, 0, d, false);
        }
    }
}
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> grid[i][j];
    }
    for(int i = 0; i < n * m * 4; i++) dist[i] = 1000000000;
    front = 0;
    back = 1;
    dist[0] = 0;
    while (front < back) {
        int current = q[front];
        front++;
        int d = dist[current];
        int add = current % 4;
        current /= 4;
        int c = current % m;
        int r = current / m;
        if (r == n - 1 && c == m - 1) {
            cout << d << endl;
            return 0;
        }
        if (grid[r][c] == purple) step(r, c, add, 0, d + 1, true);
        else {
            for (int i = 0; i < 4; i++) step(r, c, i, add, d + 1, false);
        }
    }
    cout << -1 << endl;
}
*/
