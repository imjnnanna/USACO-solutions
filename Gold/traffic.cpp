/*
#include <iostream>
using namespace std;
int grid[305][305];
int n, m, s, d;
int arr[305];
bool vis[305];
struct junct {
    bool color; // 0 = blue, 1 = purple
    int remain, cycle[2];
} junction[305];
bool lightequal(int a, int b, int t) {
    bool acolor, bcolor;
    int atime = t - junction[a].remain, btime = t - junction[b].remain;
    if(atime < 0) acolor = junction[a].color;
    else {
        atime %= (junction[a].cycle[0] + junction[a].cycle[1]);
        if(atime < junction[a].cycle[1 - junction[a].color]) acolor = 1 - junction[a].color;
        else acolor = junction[a].color;
    }
    if(btime < 0) bcolor = junction[b].color;
    else {
        btime %= (junction[b].cycle[0] + junction[b].cycle[1]);
        if(btime < junction[b].cycle[1 - junction[b].color]) bcolor = 1 - junction[b].color;
        else bcolor = junction[b].color;
    }
    return acolor == bcolor;
}
void dijkstra() {
    for(int i = 0; i <= n; i++) arr[i] = 1000000000;
    arr[s] = 0;
    for(int i = 1; i <= n; i++) {
        int x = 0;
        for(int j = 1; j <= n; j++) { // finding the smallest value & index
            if(!vis[j] && arr[x] > arr[j]) x = j;
        }
        if(x == 0) continue;
        vis[x] = true; // x = current time
        for(int j = 1; j <= n; j++) { // update neighbors
            if(vis[j] || !grid[x][j]) continue;
            for(int t = arr[x]; t <= arr[x] + 300; t++) {
                if(lightequal(x, j, t)) {
                    arr[j] = min(arr[j], t + grid[x][j]);
                    break;
                }
            }
        }
    }
}
int main() {
    int a, b, c;
    cin >> s >> d >> n >> m;
    char temp;
    for(int i = 1; i <= n; i++) {
        cin >> temp >> junction[i].remain >> junction[i].cycle[0] >> junction[i].cycle[1];
        if(temp == 'B') junction[i].color = 0;
        else junction[i].color = 1;
    }
    for(int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        grid[a][b] = grid[b][a] = c;
    }
    dijkstra();
    if(arr[d] == 1000000000) cout << 0 << endl;
    else cout << arr[d] << endl;
}
*/
