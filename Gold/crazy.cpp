/*
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
struct edge {
    int x1, y1, x2, y2;
} fence[1005];
edge temp;
struct point {
    int x, y;
} cow[1005];
int n, c;
vector<edge> polygons[1005];
bool vis[1005];
void dfs(int x1, int y1, int x2, int y2, int pind) {
    temp.x1 = x1; temp.y1 = y1; temp.x2 = x2; temp.y2 = y2;
    for(int i = 0; i < n; i++) {
        if(vis[i]) continue; // if visited, continue;
        if((fence[i].x1 == x1 && fence[i].y1 == y1) || (fence[i].x2 == x1 && fence[i].y2 == y1) || (fence[i].x1 == x2 && fence[i].y1 == y2) || (fence[i].x2 == x2 && fence[i].y2 == y2)) {
            polygons[pind].push_back(fence[i]);
            vis[i] = true;
            dfs(fence[i].x1, fence[i].y1, fence[i].x2, fence[i].x2, pind);
        }
    }
}
bool contains(int cowind, int pind) {
    int crossings = 0;
    double x = cow[cowind].x, y = cow[cowind].y;
    for(int i = 0; i < polygons[pind].size(); i++) {
        int x1 = polygons[pind][i].x1, y1 = polygons[pind][i].y1, x2 = polygons[pind][i].x2, y2 = polygons[pind][i].y2;
        double slope = (y2 - y1) / (double)(x2 - x1);
        bool cond1 = (x1 <= x) && (x < x2);
        bool cond2 = (x2 <= x) && (x < x1);
        bool above = (y < slope * (x - x1) + y1);
        // bool above2 = (y < slope * (x - x2) + y2);
        if((cond1 || cond2) && above) crossings++;
    }
    return (crossings % 2 != 0);
}
string ans[1005];
int main() {
    cin >> n >> c;
    for(int i = 0; i < n; i++) cin >> fence[i].x1 >> fence[i].y1 >> fence[i].x2 >> fence[i].y2;
    for(int i = 0; i < c; i++) cin >> cow[i].x >> cow[i].y;
    int numofpolygons = 0;
    for(int i = 0; i < n; i++) {
        if(vis[i]) continue;
        vis[i] = true;
        polygons[numofpolygons].push_back(fence[i]);
        dfs(fence[i].x1, fence[i].y1, fence[i].x2, fence[i].y2, numofpolygons);
        numofpolygons++;
    }
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < numofpolygons; j++) {
            if(contains(i, j)) ans[i] += to_string(j) + " ";
        }
    }
    int best = 0, count = 0;
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < c; j++) {
            if(ans[i] == ans[j]) count++;
        }
        best = max(best, count);
        count = 0;
    }
    cout << best << endl;
}
*/
/*
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
struct edge {
    int x1, y1, x2, y2;
} fence[1005];
struct point {
    int x, y;
} cow[1005];
int n, c;
vector<pair<int, int>> polygons[1005];
bool vis[1005];
void dfs(int ind, bool first, int pind) {
    for(int i = 0; i < n; i++) {
        if(vis[i] || i == ind) continue;
        if(first) {
            if(fence[ind].x1 == fence[i].x1 && fence[ind].y1 == fence[i].y1) {
                vis[i] = true;
                polygons[pind].push_back(make_pair(fence[i].x2, fence[i].y2));
                dfs(i, false, pind);
                break;
            } else if(fence[ind].x1 == fence[i].x2 && fence[ind].y1 == fence[i].y2) {
                vis[i] = true;
                polygons[pind].push_back(make_pair(fence[i].x1, fence[i].y1));
                dfs(i, true, pind);
                break;
            }
        } else {
            if(fence[ind].x2 == fence[i].x1 && fence[ind].y2 == fence[i].y1) {
                vis[i] = true;
                polygons[pind].push_back(make_pair(fence[i].x2, fence[i].y2));
                dfs(i, false, pind);
                break;
            } else if (fence[ind].x2 == fence[i].x2 && fence[ind].y2 == fence[i].y2) {
                vis[i] = true;
                polygons[pind].push_back(make_pair(fence[i].x1, fence[i].y1));
                dfs(i, true, pind);
                break;
            }
        }
    }
}
bool contains(int cowind, int pind) {
    int crossings = 0;
    double x = cow[cowind].x, y = cow[cowind].y;
    for(int i = 0; i < polygons[pind].size() - 1; i++) {
        int x1 = polygons[pind][i].first, y1 = polygons[pind][i].second, x2 = polygons[pind][i + 1].first, y2 = polygons[pind][i + 1].second;
        double slope = (y2 - y1) / (double)(x2 - x1);
        bool cond1 = (x1 <= x) && (x < x2);
        bool cond2 = (x2 <= x) && (x < x1);
        bool above = (y < slope * (x - x1) + y1);
        if((cond1 || cond2) && above) crossings++;
    }
    return (crossings % 2 != 0);
}
string ans[1005];
int main() {
    cin >> n >> c;
    for(int i = 0; i < n; i++) cin >> fence[i].x1 >> fence[i].y1 >> fence[i].x2 >> fence[i].y2;
    for(int i = 0; i < c; i++) cin >> cow[i].x >> cow[i].y;
    int numofpolygons = 0;
    for(int i = 0; i < n; i++) {
        if(vis[i]) continue;
        vis[i] = true;
        polygons[numofpolygons].push_back(make_pair(fence[i].x1, fence[i].y1));
        dfs(i, true, numofpolygons);
        polygons[numofpolygons].push_back(make_pair(fence[i].x1, fence[i].y1));
        numofpolygons++;
    }
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < numofpolygons; j++) {
            if(contains(i, j)) ans[i] += to_string(j) + " ";
        }
    }
    int best = 0, count = 0;
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < c; j++) {
            if(ans[i] == ans[j]) count++;
        }
        best = max(best, count);
        count = 0;
    }
    cout << best << endl;
}
*/
