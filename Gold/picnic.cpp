/*
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int> grid[1005];
int k, n, m;
int arr[1005];
bool vis[1005];
bool canpicnic[1005];
priority_queue<pair<int, int>> edge;
void dijkstra(int s) {
    for(int i = 0; i <= n; i++) arr[i] = 1000000000;
    for(int i = 0; i <= n; i++) vis[i] = false;
    arr[s] = 0;
    edge.push(make_pair(0, s)); // -distance, node
    while(!edge.empty()) {
        pair<int, int> x = edge.top();
        edge.pop();
        if(vis[x.second]) continue; // if visited the node, continue
        for (auto i: grid[x.second]) { // run through all of node's neighbors
            // i = neighbor node
            if(!vis[i] && arr[i] > arr[x.second] + 1) { // if neighbor isn't visited and it needs to be updated
                arr[i] = arr[x.second] + 1; // update, neighbor = weight at current node + 1 (minute)
                edge.push(make_pair(-arr[i], i)); // push
            }
        }
        vis[x.second] = true;
    }
}
int main() {
    cin >> k >> n >> m;
    int cow[k + 1];
    for(int i = 1; i <= k; i++) cin >> cow[i];
    int a, b;
    for(int i = 1; i <= m; i++) {
        cin >> a >> b;
        grid[a].push_back(b); // neighbor
    }
    for(int i = 1; i <= n; i++) {
        canpicnic[i] = true;
    }
    for(int i = 1; i <= k; i++) {
        dijkstra(cow[i]);
        for(int j = 1; j <= n; j++) {
            if(arr[j] == 1000000000) canpicnic[j] = false;
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        if(canpicnic[i] == true) ans++;
    }
    cout << ans << endl;
}
*/
