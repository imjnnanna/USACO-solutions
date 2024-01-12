/*
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int b, e, p, n, m, dist[40005]; // it will never be optimal to meet, split, then meet again. if met, then stay together till the end!!!
vector<int> connect[40005];
bool vis[40005];
int bessie[40005], elsie[40005]; // min distance to get from 1 to i, 2 to i - without meeting
int bfs(int s, int end, int energy) { // return min distance from node s to node e
    if(s == n) return 0;
    queue<int> q;
    for(int i = 0; i <= n; i++) {
        dist[i] = 1000000000;
        vis[i] = false;
    }
    dist[s] = 0;
    q.push(s);
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        if(vis[x]) continue;
        vis[x] = true;
        if(x == end) break;
        for(int i: connect[x]) { // run through all of node's neighbors
            if(!vis[i] && dist[i] > dist[x] + energy) {
                dist[i] = dist[x] + energy;
                q.push(i);
            }
        }
    }
    return dist[end];
}
int dfs(int bessielocation, int elsielocation) {
    //     cout << "bessielocation = " << bessielocation << ", elsielocation = " << elsielocation << endl;
    if(bessielocation == n || elsielocation == n) return bfs(elsielocation, n, e) + bfs(bessielocation, n, b);
    if(!bessie[bessielocation]) bessie[bessielocation] = bfs(1, bessielocation, b);
    if(!elsie[elsielocation]) elsie[elsielocation] = bfs(2, elsielocation, e);
    
//    if(!bessie[bessielocation]) {
//        bessie[bessielocation] = 1000000000;
//        for(int i: connect[bessielocation]) bessie[bessielocation] = min(bessie[bessielocation], dfs(i, elsielocation) + b);
//    }
//    if(!elsie[elsielocation]) {
//        elsie[elsielocation] = 1000000000;
//        for(int i: connect[elsielocation]) elsie[elsielocation] = min(elsie[elsielocation], dfs(bessielocation, i) + e);
//    }
    int ans = 1000000000;
    for(int i: connect[bessielocation]) {
        for(int j: connect[elsielocation]) {
            if(i == j) {
                //     cout << "bessielocation = " << bessielocation << ", elsielocation = " << elsielocation << ", met up at location " << i << endl;
                ans = min(ans, bessie[bessielocation] + elsie[elsielocation] + bfs(bessielocation, i, b) + bfs(elsielocation, i, e) + bfs(i, n, p));
                //     cout << "bessie to meeting = " << bfs(bessielocation, i, b) << ", elsie to meeting = " << bfs(elsielocation, i, e) << ", meeting to end = " << bfs(i, n, p) << endl;
                //     cout << "ans = " << ans << endl;
            }
        }
    }
    return min(ans, bessie[bessielocation] + elsie[elsielocation]);
}
int main() {
    cin >> b >> e >> p >> n >> m;
    int temp, orary;
    for(int i = 0; i < m; i++) {
        cin >> temp >> orary;
        connect[temp].push_back(orary);
        connect[orary].push_back(temp);
    }
    if(b + e > p) cout << dfs(1, 2) << endl;
    else cout << bfs(1, n, b) + bfs(2, n, e) << endl;
}
*/
