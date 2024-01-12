/*
#include <iostream>
#include <queue>
using namespace std;
int n, m, startx = 0, starty = 0;
pair<int, int> startpos;
int grid[505][505];
pair<int, int> endpos(int x, int y, bool gravdirect) {
    if (x < 0 || x >= n || y < 0 || y >= m || grid[x][y] == 0) return make_pair(-1, -1);
    if (grid[x][y] == 2) return make_pair(x, y);
    pair<int, int> currentpos = make_pair(x, y);
    while (true) {
        if (gravdirect) currentpos.first--;
        else currentpos.first++;
        if (currentpos.first < 0 || currentpos.first >= n) return make_pair(-1, -1);
        else if (grid[currentpos.first][currentpos.second] == 0) {
            if (gravdirect) currentpos.first++;
            else currentpos.first--;
            return make_pair(currentpos.first, currentpos.second);
        } else if (grid[currentpos.first][currentpos.second] == 2) return make_pair(currentpos.first, currentpos.second);
    }
}
void bfs() {
    // distance, gravityPointingUp, posX, posY
    priority_queue<pair<int, pair<bool, pair<int, int>>>, vector<pair<int, pair<bool, pair<int, int>>>>, greater<pair<int, pair<bool, pair<int, int>>>>> pq;
    int dist[n][m][2];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            dist[i][j][0] = dist[i][j][1] = 1000000000;
        }
    }
    dist[startpos.first][startpos.second][0] = 0;
    pq.push(make_pair(0, make_pair(false, make_pair(startpos.first, startpos.second))));
    while (!pq.empty()) {
        pair<int, pair<bool, pair<int, int>>> next = pq.top();
        pq.pop();
        int currentdist = dist[next.second.second.first][next.second.second.second][next.second.first];
        if (currentdist < next.first) continue;
        currentdist = next.first;
        if (grid[next.second.second.first][next.second.second.second] == 2) {
            cout << currentdist << endl;
            return;
        }
        // right
        pair<int, int> goright = endpos(next.second.second.first, next.second.second.second+1, next.second.first);
        if (goright.first != -1) {
            if (currentdist < dist[goright.first][goright.second][next.second.first]) {
                dist[goright.first][goright.second][next.second.first] = currentdist;
                pq.push(make_pair(dist[goright.first][goright.second][next.second.first], make_pair(next.second.first, make_pair(goright.first, goright.second))));
            }
        }
        // left
        pair<int, int> goleft = endpos(next.second.second.first, next.second.second.second-1, next.second.first);
        if (goleft.first != -1) {
            if (currentdist < dist[goleft.first][goleft.second][next.second.first]) {
                dist[goleft.first][goleft.second][next.second.first] = currentdist;
                pq.push(make_pair(dist[goleft.first][goleft.second][next.second.first], make_pair(next.second.first, make_pair(goleft.first, goleft.second))));
            }
        }
        // flip gravity
        pair<int, int> flip = endpos(next.second.second.first, next.second.second.second, !next.second.first);
        if (flip.first != -1) {
            if (currentdist + 1 < dist[flip.first][flip.second][!next.second.first]) {
                dist[flip.first][flip.second][!next.second.first] = currentdist + 1;
                pq.push(make_pair(dist[flip.first][flip.second][!next.second.first], make_pair(!next.second.first, make_pair(flip.first, flip.second))));
            }
        }
    }
    cout << "-1" << endl;
}
int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) { // blocked = 0, empty = 1, arrival = 2
        for(int j = 0; j < m; j++) {
            char c;
            cin >> c;
            if (c == 'C') {
                startx = i;
                starty = j;
                c = '.';
            }
            if (c == '.') grid[i][j] = 1;
            else if (c == '#') grid[i][j] = 0;
            else if (c == 'D') grid[i][j] = 2;
        }
    }
    startpos = endpos(startx, starty, false);
    if (startpos.first == -1) {
        cout << "-1" << endl;
        return 0;
    }
    bfs();
}
*/
