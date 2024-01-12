/*
make each grid & cell a node.
draw edges to where bessie can go (chess knight move)
compute every node's distance to the end
same as gps; dijkstra backwards and either mark it optimal or not optimal
if it's not optimal: delete the edge (if traveling node a to node b, if b + edge length = a then it's optimal)
now we're left with a tree that is extremely ONLY optimal.
we just need to find how many paths through the tree to get to the ending lilypad.
 
how to jump: make the dr dc as the chess knight moves
if there is no lilypad, the weight is 0; if there is one, the weight is 1
TRICKY PART: when counting number of paths, avoid infinite cycles between lilypads
run a floodfill from each lilypad and see which lilypads you can reach; then clump them into one node because it's like interchangable
append them to the same list
*/
/*
For problem 3 (Lilypad Pond), we need to find the minimum number of lilypads to add so that Bessie can travel from 3 to 4 and the number of ways of adding the the lilypads. Note that that isn’t the same as the number of paths - it doesn’t matter which cells Bessie jumps on that already have lilypads, it only matters which water cells she jumps on.

To solve this, we imagine that the graph only has 0s (and 3 and 4). From each of these cells, we dfs/bfs to find the 0s (and 3 and 4) that the current cell can reach while only going through 1s. From this, we create an adjacency vector. Assume that the cell with 4 is a water cell and subtract 1 from the distance answer.

We the do another bfs starting from the cell with 3 to the cell with 4 using the adjacency vector that we just built. When we travel from node a to node b, distance[b] = distance[a] + 1, ways[b] += ways[a]. It is ‘+=’ instead of ‘=’ because there could be multiple paths going into node b. There is 1 way to reach cell with 3. The answer is the distance to the cell with 4 minus 1 and the ways to reach the cell with 4.
*/
/*
4 5
1 0 0 0 0
3 0 0 0 0
0 0 2 0 0
0 0 0 4 0
*/
// 0 = water, 1 = lilypad, 2 = rock, 3 = start, 4 = end
// output number of additional lilypads (or -1), and number of ways to do this (or -1)
/*
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int m, n, pond[31][31], arr[31];
int dr[8] = {1, 2, -1, -2, -1, -2, 1, 2};
int dc[8] = {2, 1, 2, 1, -2, -1, -2, -1};
priority_queue<pair<int, int>> edge;
vector<pair<int, int>> g[31];
bool vis[31];
bool legal(int r, int c) {
    return r >= 0 && r < m && c >= 0 && c < n;
}
void floodfill(int r, int c) {
    for(int i = 0; i < 8; i++) {
        int nr = r + dr[i];
        int nc = c + dc[i];
        if(legal(nr, nc) && pond[nr][nc] == 1) pond[nr][nc] = 0;
    }
}
void dijkstra() {
    for(int i = 0; i <= n; i++) arr[i] = 1000000000;
    arr[n] = 0;
    edge.push(make_pair(0, n));
    while(!edge.empty()) {
        pair<int, int> x = edge.top();
        edge.pop();
        if(vis[x.second]) continue; // x.second = current node, x.first = current node's weight * -1
        for (auto i: g[x.second]) { // run through all of node's neighbors
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
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) cin >> pond[i][j];
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(pond[i][j] == 1) floodfill(i, j);
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < 8; k++) {
                int nr = i + dr[k];
                int nc = j + dc[k];
                if(legal(nr, nc));
            }
        }
    }
}
 */
/*
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n, m;
pair<pair<int, int>, pair<int, int>> road[50005];
vector<pair<int, int>> g1[10005], g2[10005], complaint[10005];
int arr1[10005], arr2[10005], arr3[10005];
bool vis1[10005], vis2[10005], vis3[10005];
priority_queue<pair<int, int>> edge;
void dijkstra1() {
    for(int i = 0; i <= n; i++) arr1[i] = 1000000000;
    arr1[n] = 0;
    edge.push(make_pair(0, n));
    while(!edge.empty()) {
        pair<int, int> x = edge.top();
        edge.pop();
        if(vis1[x.second]) continue; // x.second = current node, x.first = current node's weight * -1
        for (auto i: g1[x.second]) { // run through all of node's neighbors
            int a = i.second; // neighbor
            int b = -i.first; // cost (-1 because it was inputted negative)
            if(!vis1[a] && arr1[a] > b + arr1[x.second]) { // if neighbor isn't visited and it needs to be updated
                arr1[a] = b + arr1[x.second]; // update, neighbor = cost + cost at current node
                edge.push(make_pair(-arr1[a], a)); // push
            }
        }
        vis1[x.second] = true;
    }
}
void dijkstra2() {
    for(int i = 0; i <= n; i++) arr2[i] = 1000000000;
    arr2[n] = 0;
    edge.push(make_pair(0, n));
    while(!edge.empty()) {
        pair<int, int> x = edge.top();
        edge.pop();
        if(vis2[x.second]) continue; // x.second = current node, x.first = current node's weight * -1
        for (auto i: g2[x.second]) { // run through all of node's neighbors
            int a = i.second; // neighbor
            int b = -i.first; // cost (-1 because it was inputted negative)
            if(!vis2[a] && arr2[a] > b + arr2[x.second]) { // if neighbor isn't visited and it needs to be updated
                arr2[a] = b + arr2[x.second]; // update, neighbor = cost + cost at current node
                edge.push(make_pair(-arr2[a], a)); // push
            }
        }
        vis2[x.second] = true;
    }
}
void dijkstra3() {
    for(int i = 0; i <= n; i++) arr3[i] = 1000000000;
    arr3[1] = 0;
    edge.push(make_pair(0, 1));
    while(!edge.empty()) {
        pair<int, int> x = edge.top();
        edge.pop();
        if(vis3[x.second]) continue; // x.second = current node, x.first = current node's weight * -1
        for (auto i: complaint[x.second]) { // run through all of node's neighbors
            int a = i.second; // neighbor
            int b = -i.first; // cost (-1 because it was inputted negative)
            if(!vis3[a] && arr3[a] > b + arr3[x.second]) { // if neighbor isn't visited and it needs to be updated
                arr3[a] = b + arr3[x.second]; // update, neighbor = cost + cost at current node
                edge.push(make_pair(-arr3[a], a)); // push
            }
        }
        vis3[x.second] = true;
    }
}
int main() {
    cin >> n >> m;
    int a, b, p, q;
    for(int i = 0; i < m; i++) {
        cin >> a >> b >> p >> q;
        g1[b].push_back(make_pair(-p, a)); // put it in reverse order
        g2[b].push_back(make_pair(-q, a));
        road[i] = make_pair(make_pair(a, b), make_pair(p, q));
    }
    dijkstra1();
    dijkstra2();
    int len, len2;
    for(int i = 0; i < m; i++) {
        a = road[i].first.first;
        b = road[i].first.second;
        len = road[i].second.first;
        len2 = road[i].second.second;
        int c = 0;
        if(arr1[a] - arr1[b] != len) c++; // if gps1 complains
        if(arr2[a] - arr2[b] != len2) c++;// if gps2 complains
        complaint[a].push_back(make_pair(-c, b));
    }
    dijkstra3();
    cout << arr3[n] << endl;
}
*/
