// FLOODFILL
/*
#include <iostream>
using namespace std;
int dr[4] = {-1, 0, 1, 0}; // up, right, down, left
int dc[4] = {0, 1, 0, -1};
char grid[105][105];
bool blocked[105][105][4];
int n, k, r;


struct coor {
    int row, col;
};
struct road {
    int rone, cone, rtwo, ctwo;
};
bool legal(int a, int b) {
    if(a < n && b < n && a >= 0 && b >= 0) {
        if(grid[a][b] != '.') {
            return true;
        }
    }
    return false;
}
void fill(int r, int c) {
    for(int i = 0; i < 4; i++) {
        int nc = c + dc[i];
        int nr = r + dr[i];
        if(legal(nr, nc)) {
            grid[nr][nc] = '.';
            fill(nr, nc);
        }
    }
}
int main() {
    cin >> n >> k >> r;
    road roads[r];
    coor cows[k];
    for(int i = 0; i < r; i++) {
        cin >> roads[i].rone >> roads[i].cone >> roads[i].rtwo >> roads[i].ctwo;
    }
    for(int i = 0; i < k; i++) {
        cin >> cows[i].row >> cows[i].col;
    }
    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < n + 1; j++) {
            grid[i][j] = '.';
            for(int l = 1; l < k + 1; l++) {
                if(i == cows[l].row && j == cows[l].col) {
                    grid[i][j] = 'C';
                }
            }
        }
    }
    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < n + 1; j++) {
            if(grid[i][j] == 'C') {
                for(int l = 1; l < k; l++) {
                    
                }
            }
            
        }
    }
}
/*
 bool blocked[][][];
 blocked[2][2][0] = true;
               ^
             right
 */
