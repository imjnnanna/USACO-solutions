/*
#include <iostream>
#include <queue>
#include <cmath>
using namespace std;
int h, f;
pair<int, int> hold[10005];
vector<int> grid[31][31];
int dx[9] = {0, 0, 0, 1, 1, 1, -1, -1, -1};
int dy[9] = {0, 1, -1, 0, 1, -1, 0, 1, -1};
bool distance(int a, int b, int c, int d) {
    return (a - c) * (a - c) + (d - b) * (d - b) <= 1000000;
}
int dist[10005];
queue<int> q;
bool legal(int x, int y) {
    return x >= 0 && y >= 0 && x <= 30 && y <= h / 1000;
}
int main() {
    cin >> h >> f;
    for(int i = 0; i < f; i++) dist[i] = 1000000000;
    for(int i = 0; i < f; i++) {
        cin >> hold[i].first >> hold[i].second;
        grid[hold[i].first / 1000][hold[i].second / 1000].push_back(i);
        if(hold[i].second <= 1000) {
            dist[i] = 1;
            q.push(i);
        }
    }
    while(!q.empty()) {
        int f = q.front();
        q.pop();
        int x = hold[f].first, y = hold[f].second;
        for(int i = 0; i < 9; i++) {
            if(!legal(x / 1000 + dx[i], y / 1000 + dy[i])) continue;
            for(int j: grid[x / 1000 + dx[i]][y / 1000 + dy[i]]) { // run through neighbors
                if(distance(x, y, hold[j].first, hold[j].second)) {
                    if(dist[j] == 1000000000) q.push(j);
                    dist[j] = min(dist[f] + 1, dist[j]);
                }
            }
        }
    }
    int best = 1000000000;
    for(int i = 0; i < f; i++) {
        if(hold[i].second >= h - 1000) best = min(best, dist[i]);
    }
    cout << best << endl;
}
*/
