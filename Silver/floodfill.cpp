/*
#include <iostream>
using namespace std;
int n, m, count = 1;
char grid[105][105];
int x[] = {1, 0, 0, -1};
int y[] = {0, 1, -1, 0};
void floodfill(int r, int c) {
    for(int i = 0; i < 4; i++) {
        int nr = r + x[i];
        int nc = c + y[i];
        if(nr < n && nc < m && nr >= 0 && nc >= 0 && grid[nr][nc] == '.') {
            grid[nr][nc] = char(count + '0');
            floodfill(nr, nc);
        }
    }
}
int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == '.') {
                grid[i][j] = char(count + '0');
                floodfill(i, j);
                count++;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }
}
*/
