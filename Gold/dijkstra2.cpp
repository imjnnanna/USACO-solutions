/*
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<pair<int, int>> grid[50005];
int v, e, s;
int arr[50005];
bool vis[50005];
priority_queue<pair<int, int>> edge;
void dijkstra() {
    for(int i = 0; i <= v; i++) arr[i] = 1000000000;
    arr[s] = 0;
    edge.push(make_pair(0, s));
    while(!edge.empty()) {
        pair<int, int> x = edge.top();
        edge.pop();
        if(vis[x.second]) continue; // x.second = current node, x.first = current node's weight * -1
        for (auto i: grid[x.second]) { // run through all of node's neighbors
            int a = i.second; // neighbor
            int b = -i.first; // cost (-1 because it was inputted negative)
            if(!vis[a] && arr[a] > b + arr[x.second]) { // if neighbor isn't visited and it needs to be updated
                arr[a] = b + arr[x.second]; // update, neighbor = cost + cost at current node
                edge.push(make_pair(-arr[a], a)); // push
            }
        }
        vis[x.second] = true;
    }
}
int main() {
    cin >> v >> e >> s;
    int a, b, c;
    for(int i = 1; i <= e; i++) {
        cin >> a >> b >> c;
        grid[a].push_back(make_pair(-c, b)); // cost, neighbor
        grid[b].push_back(make_pair(-c, a));
    }
    dijkstra();
    for(int i = 1; i <= v; i++) {
        if(arr[i] < 1000000000) cout << arr[i] << endl;
        else cout << -1 << endl;
    }
}
*/
