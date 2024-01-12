/*
// N ≤ 20 - SMALL!!!!!
// O(N^4) - choose rectangles.
// Floodfill - 2 lakes of one color, 1 lake of another color
#include <iostream>
using namespace std;
int n, m;
char field[21][21];
int dr[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dc[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
bool legal(int a, int b) {
    if(a < n && b < m && a >= 0 && b >= 0) {
        if(field[a][b] == 'W') {
            return true;
        }
    }
    return false;
}
void fill(int r, int c) {
    for(int i = 0; i < 8; i++) {
        int nc = c + dc[i];
        int nr = r + dr[i];
        if(legal(nr, nc)) {
            field[nr][nc] = '.';
            fill(nr, nc);
        }
    }
}
int main() {
    
}
*/
