/*
#include <iostream>
#include <queue>
using namespace std;
int n, k, mintime = 100000000;
bool vis[200010];
bool legal(int x) {
    return(x >= 0 || x <= 2 * k);
}
void bfs(int pos, int time) {
    queue<pair<int, int>> q;
    q.push(make_pair(pos, time));
    while(!q.empty()) {
        if(!legal(pos) || time > mintime) return;
        vis[pos] = true;
        pair<int, int> f = q.front();
        q.pop();
        pos = f.first;
        time = f.second;
        if(pos == k) mintime = min(mintime, time);
        if(legal(pos + 1) && !vis[pos + 1]) {
            q.push(make_pair(pos + 1, time + 1));
            vis[pos + 1] = true;
        }
        if(legal(pos - 1) && !vis[pos - 1]) {
            q.push(make_pair(pos - 1, time + 1));
            vis[pos - 1] = true;
        }
        if(n < k && legal(pos * 2) && !vis[pos * 2]) {
            q.push(make_pair(pos * 2, time + 1));
            vis[pos * 2] = true;
        }
    }
}
int main() {
    cin >> n >> k;
    bfs(n, 0);
    cout << mintime << endl;
}
*/
