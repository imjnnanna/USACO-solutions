/*
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<pair<int, int>> grid[50005];
int v, e;
int arr[50005];
bool vis[50005];
priority_queue<pair<int, int>> edge;
int mst() {
    for(int i = 2; i <= v; i++) arr[i] = 1000000000;
    edge.push(make_pair(0, 1));
    while(!edge.empty()) {
        pair<int, int> x = edge.top();
        edge.pop();
        if(vis[x.second]) continue; // x.second = current node, x.first = current node's weight * -1
        for (auto i: grid[x.second]) { // run through all of node's neighbors
            int a = i.second; // neighbor
            int b = -i.first; // cost (-1 because it was inputted negative)
            if(!vis[a] && arr[a] > b) { // if neighbor isn't visited and it needs to be updated
                arr[a] = b; // update
                edge.push(i); // push
            }
        }
        vis[x.second] = true;
    }
    int len = 0;
    for(int i = 1; i <= v; i++) len += arr[i];
    return len;
}
int main() {
    cin >> v >> e;
    int a, b, c;
    for(int i = 1; i <= e; i++) {
        cin >> a >> b >> c;
        grid[a].push_back(make_pair(-c, b)); // cost, neighbor
        grid[b].push_back(make_pair(-c, a));
    }
    cout << mst() << endl;
}
*/
