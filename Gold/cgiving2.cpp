/*
#include <iostream>
using namespace std;
int grid[2505][2505];
int n, m, s;
int arr[2505];
bool vis[2505];
void dijkstra() {
    for(int i = 1; i <= n; i++) arr[i] = 1000000000;
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
    int a, b, c;
    cin >> n >> m >> s;
    for(int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        if(grid[a][b] != 0) grid[a][b] = grid[b][a]= min(grid[a][b], c);
        else grid[a][b] = grid[b][a] = c;
    }
    dijkstra();
    for(int i = 1; i <= s; i++) {
        cin >> a >> b;
        cout << arr[a] + arr[b] << endl;
    }
}
*/
