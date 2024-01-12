/*
#include <iostream>
using namespace std;
bool grid[101][101];
int main() {
    int n, m, win, loss;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        grid[i][i] = true;
    }
    for(int i = 1; i <= m; i++) {
        cin >> win >> loss;
        grid[win][loss] = true;
    }
    for(int k = 1; k <= n; k++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                grid[i][j] = grid[i][j] || (grid[i][k] && grid[k][j]);
            }
        }
    }
    int counter = 0, output = 0;
    for(int i = 1; i <= n; i++) {
        counter = 0;
        for(int j = 1; j <= n; j++) {
            if(grid[i][j] || grid[j][i]) counter++;
        }
        if(counter == n) output++;
    }
    cout << output << endl;
}
*/
