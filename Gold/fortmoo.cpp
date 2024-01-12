/*
#include <iostream>
using namespace std;
int n, m, ph[205][205], pv[205][205];
bool grid[205][205];
int main() {
    cin >> n >> m;
    char c;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> c;
            if(c == '.') grid[i][j] = true;
            else {
                grid[i][j] = false;
                ph[i][j]++;
            }
            if(j != 0) ph[i][j] += ph[i][j - 1];
        }
    }
    for(int i = 0; i < m; i++) { // column
        for(int j = 0; j < n; j++) { // row
            if(!grid[j][i]) pv[j][i]++;
            if(j != 0) pv[j][i] += pv[j - 1][i];
        }
    }
    int best = 0;
    for(int y1 = 0; y1 < n; y1++) { // top left corner of rect.
        for(int x1 = 0; x1 < m; x1++) {
            for(int y2 = y1 + 1; y2 < n; y2++) { // bottom right corner of rect.
                for(int x2 = x1 + 1; x2 < m; x2++) {
                    // area of rectangle = (x2 - x1) * (y2 - y1)
                    if(ph[y1][x1] == ph[y1][x2] && ph[y2][x1] == ph[y2][x2] && pv[y1][x1] == pv[y2][x1] && pv[y1][x2] == pv[y2][x2] && grid[y1][x1] && grid[y1][x2] && grid[y2][x1] && grid[y2][x2]) {
                        best = max(best, (x2 - x1 + 1) * (y2 - y1 + 1));
                    }
                }
            }
        }
    }
    cout << best << endl;
}
*/
