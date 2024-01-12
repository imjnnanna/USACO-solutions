/*
#include <iostream>
#include <vector>
using namespace std;
int dollars, paths, cities, flights, start;
int dist[225];
vector<pair<pair<int, int>, int>> edge; // a, b, cost
int money = -1;
void bellmanford() {
    for(int i = 1; i <= cities; i++) dist[i] = 1000000000;
    dist[start] = -dollars;
    for(int i = 0; i < cities; i++) {
        for(auto j: edge) {
            dist[j.first.second] = min(dist[j.first.second], dist[j.first.first] + j.second - dollars);
        }
    }
}
int main() {
    cin >> dollars >> paths >> cities >> flights >> start;
    int a, b, c;
    for(int i = 0; i < paths; i++) {
        cin >> a >> b;
        edge.push_back(make_pair(make_pair(a, b), 0));
    }
    for(int i = 0; i < flights; i++) {
        cin >> a >> b >> c;
        edge.push_back(make_pair(make_pair(a, b), c));
    }
    bellmanford();
    for(int i = 1; i <= cities; i++) money = max(money, -dist[i]);
    cout << money << endl;
}
*/
