/*
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<pair<int, int>> grid[305];
int n, arr[305];
bool vis[305];
priority_queue<pair<int, int>> edge;
int mst() {
    for(int i = 0; i <= n + 1; i++) arr[i] = 1000000000;
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
    for(int i = 1; i <= n + 1; i++) len += arr[i];
    return len % 1000000000;
}
int main() {
    cin >> n;
    int x;
    for(int i = 1; i <= n; i++) {
        cin >> x;
        grid[i].push_back(make_pair(-x, n + 1));
        grid[n + 1].push_back(make_pair(-x, i));
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> x;
            if(i != j) grid[i].push_back(make_pair(-x, j));
        }
    }
    cout << mst() << endl;
}
*/
