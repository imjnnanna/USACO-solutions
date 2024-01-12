/*
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<pair<int, int>> grid[100005];
int c, p, pb, pa1, pa2;
int arr[100005];
bool vis[100005];
priority_queue<pair<int, int>> edge;
void dijkstra(int s) {
    for(int i = 0; i <= p; i++) {
        arr[i] = 1000000000;
        vis[i] = false;
    }
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
    cin >> c >> p >> pb >> pa1 >> pa2;
    int a, b, d;
    for(int i = 0; i < c; i++) {
        cin >> a >> b >> d;
        grid[a].push_back(make_pair(-d, b));
        grid[b].push_back(make_pair(-d, a));
    }
    dijkstra(pa1);
    int between = arr[pa2];
    dijkstra(pb);
    cout << min(arr[pa1], arr[pa2]) + between << endl;
}
*/
