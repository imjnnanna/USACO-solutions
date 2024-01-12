/*
 state: x, y, time
 transition:
    x, y + 1, t + 1
    x, y - 1, t + 1
    x - 1, y, t + 1
    x + 1, y, t + 1
 base conditions:
    inside the grid
    visited
    if not hit by meteor
 
 start: (0, 0)
 output: safe spot
 find min time
 
 BFS
 
 safe spot - output: any is 1000000000 or 10^9
 
 */
/*
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
struct st{
    int x, y, time;
};
queue<st> q;
int n, x, y, t, output = -1, vis[305][305], grid[305][305];
int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};
bool legal(int a, int b) {
    return(a >= 0 && b >= 0 && a <= 301 && b <= 301 && !vis[a][b]);
}
void bfs(){
    while(!q.empty()){
        st start = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            if(start.x + dx[i] > 300 && start.y + dy[i] > 300){
                output = start.time + 1;
                return;
            }
            if(legal(start.x + dx[i], start.y + dy[i])) {
                if(start.time + 1 >= grid[start.x + dx[i]][start.y + dy[i]]) continue;
                if(grid[start.x + dx[i]][start.y + dy[i]] == 1000000000){
                    output = start.time + 1;
                    return;
                }
                vis[start.x + dx[i]][start.y + dy[i]] = 1;
                st now;
                now.x = start.x + dx[i];
                now.y = start.y + dy[i];
                now.time = start.time + 1;
                q.push(now);
            }
        }
    }
}
int main(){
    cin >> n;
    for(int i = 0; i < 305; i++) {
        for(int j = 0; j < 305; j++) {
            grid[i][j] = 1000000000;
        }
    }
    for(int i = 1; i <= n; i++){
        cin >> x >> y >> t;
        if(grid[x][y] > t) grid[x][y] = t;
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(ny >= 0 && nx >= 0 && nx < 300 && ny < 300) {
                if(grid[nx][ny] > t) grid[nx][ny] = t;
            }
        }
    }
    st init;
    init.x = 0;
    init.y = 0;
    init.time = 0;
    vis[0][0] = 1;
    q.push(init);
    if(grid[0][0] == 1000000000){
        cout << -1 << endl;
    } else {
        bfs();
        cout << output << endl;
    }
}
*/
