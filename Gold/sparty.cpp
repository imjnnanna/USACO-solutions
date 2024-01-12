/*
#include <iostream>
using namespace std;
int grid1[1005][1005], grid2[1005][1005];
int n, m, s;
int arr1[1005], arr2[1005];
bool vis1[1005], vis2[1005];
void dijkstra1() {
    for(int i = 1; i <= n; i++) arr1[i] = 1000000000;
    arr1[s] = 0;
    for(int i = 1; i <= n; i++) {
        int x = 0;
        for(int j = 1; j <= n; j++) { // finding the smallest value & index
            if(!vis1[j]) {
                if(x == 0 || arr1[x] > arr1[j]) x = j;
            }
        }
        vis1[x] = true;
        for(int j = 1; j <= n; j++) { // update neighbors
            if(!vis1[j]) {
                if(grid1[x][j] > 0 && arr1[j] > grid1[x][j]) arr1[j] = min(arr1[j], arr1[x] + grid1[x][j]);
            }
        }
    }
}
void dijkstra2() {
    for(int i = 1; i <= n; i++) arr2[i] = 1000000000;
    arr2[s] = 0;
    for(int i = 1; i <= n; i++) {
        int x = 0;
        for(int j = 1; j <= n; j++) { // finding the smallest value & index
            if(!vis2[j]) {
                if(x == 0 || arr2[x] > arr2[j]) x = j;
            }
        }
        vis2[x] = true;
        for(int j = 1; j <= n; j++) { // update neighbors
            if(!vis2[j]) {
                if(grid2[x][j] > 0 && arr2[j] > grid2[x][j]) arr2[j] = min(arr2[j], arr2[x] + grid2[x][j]);
            }
        }
    }
}
int main() {
    int a, b, c;
    cin >> n >> m >> s;
    for(int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        grid1[a][b] = c;
        grid2[b][a] = c;
    }
    dijkstra1();
    dijkstra2();
    int ans = 0;
    for(int i = 1; i <= n; i++) ans = max(ans, arr1[i] + arr2[i]);
    cout << ans << endl;
}
*/
