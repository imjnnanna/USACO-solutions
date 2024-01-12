// BRUTE FORCE
/*
 1 ≤ x ≤ 100
 1 ≤ y ≤ 100
 1 ≤ m ≤ 200
 1 ≤ k ≤ 100
 */
/*
#include <iostream>
#include <cmath>
using namespace std;
bool grid[105][105];
int main() {
    int x, y, k, m;
    cin >> x >> y >> k >> m;
    grid[0][0] = true;
    for(int c = 1; c <= k; c++) {
        bool clone[x + 1][y + 1];
        for(int i = 0; i <= x; i++) {
            for(int j = 0; j <= y; j++) {
                clone[i][j] = false;
            }
        }
        for(int i = 0; i <= x; i++) {
            for(int j = 0; j <= y; j++) {
                if(grid[i][j]) {
                    clone[i][j] = true;
                    clone[i][y] = true;
                    clone[x][j] = true;
                    clone[i][0] = true;
                    clone[0][j] = true;
                    if(i + j <= y) {
                        clone[0][i + j] = true;
                    } else {
                        clone[i + j - y][y] = true;
                    }
                    if(i + j <= x) {
                        clone[i + j][0] = true;
                    } else {
                        clone[x][i + j - x] = true;
                    }
                }
            }
        }
        for(int i = 0; i <= x; i++) {
            for(int j = 0; j <= y; j++) {
                grid[i][j] = clone[i][j];
            }
        }
    }
    int best = 1000;
    for(int i = 0; i <= x; i++) {
        for(int j = 0; j <= y; j++) {
            if(grid[i][j]) {
                int milk = i + j;
                if(abs(m - milk) < best) best = abs(m - milk);
            }
        }
    }
    cout << best << endl;
}
*/
