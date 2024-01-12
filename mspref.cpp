/*
#include <iostream>
using namespace std;
int grid[2505][2505];
int n;
int arr[2505];
bool vis[2505];
// MST with Prim's Algorithm
int mst() {
    int len = 0; //initial length of MST is 0
    for(int i = 1; i <= n; i++) arr[i] = 1000000000;
    arr[1] = 0; // start from vertex 1
    for(int i = 1; i <= n; i++) {
        // choose the unused edge with minimum length in the queue
        int x = 0;
        for(int j = 1; j <= n; j++) {
            if(!vis[j]) {
                if(x == 0 || arr[x] > arr[j]) x = j;
            }
        }
        vis[x] = true;
        // explore vertices or update edges in the queue
        for(int j = 1; j <= n; j++) {
            if(!vis[j]) {
                if(grid[x][j] && arr[j] > grid[x][j]) arr[j] = grid[x][j];
            }
        }
        // update total cost of mst
       len += arr[x];
    }
    return len;
}
int main() {
    // read file
    int m, a, b, c;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        grid[a][b] = c;
        grid[b][a] = c;
    }
    cout << mst() << endl;
}
*/
