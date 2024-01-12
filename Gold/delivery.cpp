/*
#include <iostream>
#include <vector>
#include <set>
#include <queue>
using namespace std;
struct point {
    int x, y;
    point(int a, int b) {
        x = a;
        y = b;
    }
};
int n, x[100], y[100], ind[100];
set<pair<int, int>> farms;
vector<point> nodes;
vector<int> adj[500]; // adjacency list
bool online(int a, int b, int x1, int y1, int x2, int y2) {
    if(x1 == x2) return a == (x1 && b > min(y1, y2) && b < max(y1, y2)); // if line is vertical
    else if(y1 == y2) return (b == y1 && a > min(x1, x2) && a < max(x1, x2)); // if line is horizontal
    return true; // invalid
}

bool legal1(int a, int b) {
    // up/down, left/right
    bool ans = (nodes[a].x == nodes[b].x || nodes[a].y == nodes[b].y || farms.find(make_pair(nodes[a].x, nodes[b].y)) == farms.end());
    for(int i = 0; i < n; i++) {
        if(online(x[i], y[i], nodes[a].x, nodes[a].y, nodes[a].x, nodes[b].y) || online(x[i], y[i], nodes[a].x, nodes[b].y, nodes[b].x, nodes[b].y)) {
            ans = false;
            break;
        }
    }
    return ans;
}
bool legal2(int a, int b) {
    // left/right, up/down
    bool ans = (nodes[a].x == nodes[b].x || nodes[a].y == nodes[b].y || farms.find(make_pair(nodes[b].x, nodes[a].y)) == farms.end());
    for(int i = 0; i < n; i++) {
        if(online(x[i], y[i], nodes[a].x, nodes[a].y, nodes[b].x, nodes[a].y) || online(x[i], y[i], nodes[b].x, nodes[a].y, nodes[b].x, nodes[b].y)) {
            ans = false;
            break;
        }
    }
    return ans;
}

bool vis[500];
int dist[500];
int dijkstra(int a, int b) { // node[a] to node[b]
    for(int i = 0; i < nodes.size(); i++) {
        dist[i] = 1000000000;
        vis[i] = false;
    }
    // Don't visit farms (except for the start and end locations).
    for(int i = 0; i < n; i++) {
        if(ind[i] != a && ind[i] != b) vis[ind[i]] = true;
    }
    dist[a] = 0;
    for(int i = 0; i < nodes.size(); i++) {
        int next = 0;
        for(int j = 0; j < nodes.size(); j++) {
            if(!vis[j] && (dist[j] < dist[next] || vis[next])) next = j;
        }
        if(vis[next] || dist[next] == 1000000000) return -1;
        if(next == b) return dist[next];
        vis[next] = true;
        for(int j = 0; j < adj[next].size(); j++) {
            if(!vis[adj[next][j]]) dist[adj[next][j]] = min(dist[adj[next][j]], dist[next] + abs(nodes[next].x - nodes[adj[next][j]].x) + abs(nodes[next].y - nodes[adj[next][j]].y));
        }
    }
    return -1;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        farms.insert(make_pair(x[i], y[i]));
    }
    
    // Make nodes
    for(int i = 0; i < n; i++) {
        nodes.push_back(point(x[i], y[i])); // farm
        ind[i] = nodes.size() - 1;
        
        if(farms.find(make_pair(x[i] - 1, y[i])) == farms.end()) nodes.push_back(point(x[i] - 1, y[i])); // left, right, up, down (not in order hehe)
        if(farms.find(make_pair(x[i] + 1, y[i])) == farms.end()) nodes.push_back(point(x[i] + 1, y[i]));
        if(farms.find(make_pair(x[i], y[i] - 1)) == farms.end()) nodes.push_back(point(x[i], y[i] - 1));
        if(farms.find(make_pair(x[i], y[i] + 1)) == farms.end()) nodes.push_back(point(x[i], y[i] + 1));
    }
    
    // Make edges
    for(int i = 0; i < nodes.size(); i++) {
        for(int j = i + 1; j < nodes.size(); j++) {
            if(legal1(i, j) && legal2(i, j)) {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    
    int answer = 0, next = 0;
    for(int i = 0; i < n - 1; i++) { // dijkstra
        if(i < n - 1) next = dijkstra(ind[i], ind[i + 1]);
        else next = dijkstra(ind[i], ind[0]);
        if(next < 0) {
            answer = -1;
            break;
        }
        else answer += next;
    }
    cout << answer << endl;
}
*/
