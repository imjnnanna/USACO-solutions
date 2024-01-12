/*
#include <iostream>
using namespace std;
int n, m;
int field[105][105];
int dr[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dc[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
bool legal(int a, int b) {
    if(a < n && b < m && a >= 0 && b >= 0) {
        if(field[a][b] != 0) {
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
            field[nr][nc] = 0;
            fill(nr, nc);
        }
    }
}
int main() {
    int count = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> field[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(field[i][j] > 0) {
                field[i][j] = 0;
                fill(i, j);
                count++;
            }
        }
    }
    cout << count << endl;
}
*/
