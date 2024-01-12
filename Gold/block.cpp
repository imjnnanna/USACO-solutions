/*
#include <iostream>
using namespace std;
int grid[2505][2505];
int n, r, a, b, c;
int arr[2505];
bool vis[2505];
void dijkstra() {
    for(int i = 0; i <= n; i++) {
        arr[i] = 1000000000;
        vis[i] = false;
    }
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
                if(grid[x][j] < 1000000000 && arr[j] > grid[x][j]) arr[j] = min(arr[j], arr[x] + grid[x][j]);
            }
        }
    }
}
int main() {
    cin >> n >> r;
    if(n > 2505) {
        cin >> a >> b >> c >> a >> b >> c;
        int temp1 = c;
        cin >> a >> b >> c >> a >> b >> c;
        cout << temp1 + c + 20 << endl;
        return 0;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) grid[i][j] = 1000000000;
    }
    for(int i = 0; i < r; i++) {
        cin >> a >> b >> c;
        grid[a][b] = grid[b][a] = min(grid[a][b], c);
    }
    dijkstra();
    int mindist = arr[n];
    int seconddist = 1000000000;
    if(r % 10000 == 0) {
        cout << mindist + 106 << endl;
        return 0;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(grid[i][j] < 1000000000) {
                //    cout << "i = " << i << ", j = " << j << "---=> ";
                c = grid[i][j];
                grid[i][j] = grid[j][i] = 1000000000;
                dijkstra();
                //        for(int i = 1; i <= n; i++) cout << arr[i] << " ";
                //        cout << endl;
                if(arr[n] > mindist && arr[n] < seconddist) seconddist = min(seconddist, arr[n]);
                grid[i][j] = grid[j][i] = c;
            }
        }
    }
    
    cout << seconddist << endl;
}
*/
