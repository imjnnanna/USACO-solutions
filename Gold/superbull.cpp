/*
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
long long cow[2005];
long long n;
long long arr[2005];
bool vis[2005];
long long len = 0;
long long grid[2005][2005];
long long mst() {
    for(long long i = 1; i <= n; i++) arr[i] = 1000000000;
    arr[1] = 0;
    for(long long i = 1; i <= n; i++) {
        long long x = 0;
        for(long long j = 1; j <= n; j++) { // finding the smallest value & index
            if(!vis[j]) {
                if(x == 0 || arr[x] > arr[j]) x = j;
            }
        }
        vis[x] = true;
        for(long long j = 1; j <= n; j++) { // update neighbors
            if(!vis[j]) {
                if(arr[j] > grid[x][j]) arr[j] = min(arr[j], grid[x][j]);
            }
        }
    }
    for(long long i = 1; i <= n; i++) len += arr[i];
    return -len;
}
int main() {
    cin >> n;
    for(long long i = 1; i <= n; i++) cin >> cow[i];
    for(long long i = 1; i <= n; i++) {
        for(long long j = 1; j <= n; j++) {
            grid[i][j] = -1;
            if(i == j) continue;
            grid[i][j] = -(cow[i] ^ cow[j]);
        }
    }
    cout << mst() << endl;
}
*/
