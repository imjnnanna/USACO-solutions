/*
#include <iostream>
using namespace std;
int grid[2505][2505];
int n, m, s;
int arr[2505];
bool vis[2505];
void dijkstra() {
    for(int i = 1; i <= n; i++) arr[i] = 1000000000;
    for(int i = 1; i <= n; i++) vis[i] = false;
    arr[1] = 0;
    for(int i = 1; i <= n; i++) {
        int x = 0;
        for(int j = 1; j <= n; j++) { // finding the smallest value & index
            if(!vis[j]) {
                if(x == 0 || arr[x] > arr[j]) x = j;
            }
        }
        vis[x] = true;
        for(int j = 1; j <= n; j++) { // update neighbors
            if(!vis[j]) {
                if(grid[x][j] > 0 && arr[j] > grid[x][j]) arr[j] = min(arr[j], arr[x] + grid[x][j]);
            }
        }
    }
}
int main() {
    cin >> n >> m;
    int abc[m + 5][3];
    for(int i = 1; i <= m; i++) {
        cin >> abc[i][0] >> abc[i][1] >> abc[i][2];
        grid[abc[i][0]][abc[i][1]] = grid[abc[i][1]][abc[i][0]] = abc[i][2];
    }
    dijkstra();
    int min1 = arr[n];
    int min2 = -1;
    for(int i = 1; i <= m; i++) {
        grid[abc[i][0]][abc[i][1]] = grid[abc[i][1]][abc[i][0]] = abc[i][2] * 2;
        dijkstra();
        if(arr[n] < 1000000000) min2 = max(min2, arr[n]);
        grid[abc[i][0]][abc[i][1]] = grid[abc[i][1]][abc[i][0]] = abc[i][2];
    }
    cout << min2 - min1 << endl;
}
*/
