/*
#include <iostream>
using namespace std;
int n, arr[1005], grid[1005][1005];
pair<int, int> coords[1005];
bool vis[1005];
int mst() {
    int len = 0;
    for(int i = 2; i <= n; i++) arr[i] = 1000000000;
    for(int i = 1; i <= n; i++) {
        int x = 0;
        for(int j = 1; j <= n; j++) { // finding the smallest value & index
            if(!vis[j] && (x == 0 || arr[x] > arr[j])) x = j;
        }
        vis[x] = true;
        len = max(len, arr[x]);
        for(int j = 1; j <= n; j++) { // update neighbors
            if(!vis[j] && arr[j] > grid[x][j]) arr[j] = grid[x][j];
        }
    }
    return len;
}
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> coords[i].first >> coords[i].second;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == j) grid[i][j] = 1000000000;
            else grid[i][j] = (coords[i].first - coords[j].first) * (coords[i].first - coords[j].first) + (coords[i].second - coords[j].second) * (coords[i].second - coords[j].second);
        }
    }
    cout << mst() << endl;
}
*/
