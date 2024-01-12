/*
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int> grid[50005];
int n, m, s;
int arr[50005];
bool vis[50005];
priority_queue<pair<int, int>> edge;
void dijkstra() {
    for(int i = 0; i <= n; i++) arr[i] = 1000000000;
    arr[1] = 0;
    edge.push(make_pair(0, 1)); // -distance, node
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
    cin >> n >> m;
    int a, b;
    for(int i = 1; i <= m; i++) {
        cin >> a >> b;
        grid[a].push_back(b); // neighbor
        grid[b].push_back(a);
    }
    dijkstra();
    int smallind = 1000000000, maxdis = -1, count = 0;
    for(int i = 2; i <= n; i++) {
        if(arr[i] < 1000000000 && arr[i] > maxdis) {
            smallind = i;
            maxdis = arr[i];
            count = 1;
        } else if(arr[i] == maxdis) {
            count++;
        }
    }
    cout << smallind << " " << maxdis << " " << count << endl;
}
*/
