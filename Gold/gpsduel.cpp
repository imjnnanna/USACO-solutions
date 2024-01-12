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
