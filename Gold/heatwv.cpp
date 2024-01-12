/*
#include <iostream>
using namespace std;
int grid[2505][2505];
int n, m, s, e;
int arr[2505];
bool vis[2505];
void dijkstra() {
    for(int i = 1; i <= n; i++) arr[i] = 1000000000;
    arr[s] = 0;
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
    cin >> n >> m >> s >> e;
    for(int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        grid[a][b] = c;
        grid[b][a] = c;
    }
    dijkstra();
    cout << arr[e] << endl;
}
*/
