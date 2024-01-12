/*
#include <iostream>
#include <algorithm>
using namespace std;
#define int long long
int n, pc[4][50005][4]; // direction, up to the ith index, minx/miny/maxx/maxy
pair<int, int> cow[50005];
bool comp(pair<int, int> a, pair<int, int> b) { return a.second < b.second; }
main() {
    cin >> n;
    int optarea, minx = 1000000001, miny = 1000000001, maxx = 0, maxy = 0;
    for(int i = 0; i < n; i++) {
        cin >> cow[i].first >> cow[i].second;
        minx = min(minx, cow[i].first);
        miny = min(miny, cow[i].second);
        maxx = max(maxx, cow[i].first);
        maxy = max(maxy, cow[i].second);
    }
    optarea = (maxx - minx) * (maxy - miny);
    sort(cow, cow + n);
    minx = 1000000001, miny = 1000000001, maxx = 0, maxy = 0;
    for(int i = 0; i < n; i++) {
        minx = min(minx, cow[i].first);
        miny = min(miny, cow[i].second);
        maxx = max(maxx, cow[i].first);
        maxy = max(maxy, cow[i].second);
        pc[0][i][0] = minx; pc[0][i][1] = miny; pc[0][i][2] = maxx; pc[0][i][3] = maxy;
    }
    minx = 1000000001, miny = 1000000001, maxx = 0, maxy = 0;
    for(int i = n - 1; i >= 0; i--) {
        minx = min(minx, cow[i].first);
        miny = min(miny, cow[i].second);
        maxx = max(maxx, cow[i].first);
        maxy = max(maxy, cow[i].second);
        pc[1][i][0] = minx; pc[1][i][1] = miny; pc[1][i][2] = maxx; pc[1][i][3] = maxy;
    }
    sort(cow, cow + n, comp);
    minx = 1000000001, miny = 1000000001, maxx = 0, maxy = 0;
    for(int i = 0; i < n; i++) {
        minx = min(minx, cow[i].first);
        miny = min(miny, cow[i].second);
        maxx = max(maxx, cow[i].first);
        maxy = max(maxy, cow[i].second);
        pc[2][i][0] = minx; pc[2][i][1] = miny; pc[2][i][2] = maxx; pc[2][i][3] = maxy;
    }
    minx = 1000000001, miny = 1000000001, maxx = 0, maxy = 0;
    for(int i = n - 1; i >= 0; i--) {
        minx = min(minx, cow[i].first);
        miny = min(miny, cow[i].second);
        maxx = max(maxx, cow[i].first);
        maxy = max(maxy, cow[i].second);
        pc[3][i][0] = minx; pc[3][i][1] = miny; pc[3][i][2] = maxx; pc[3][i][3] = maxy;
    }
    int bestarea = 1000000000000000000, area1, area2;
    for(int i = 0; i < n; i++) {
        area1 = (pc[0][i][2] - pc[0][i][0]) * (pc[0][i][3] - pc[0][i][1]);
        area2 = (pc[1][i + 1][2] - pc[1][i + 1][0]) * (pc[1][i + 1][3] - pc[1][i + 1][1]);
        bestarea = min(bestarea, area1 + area2);
    }
    for(int i = 0; i < n; i++) {
        area1 = (pc[2][i][2] - pc[2][i][0]) * (pc[2][i][3] - pc[2][i][1]);
        area2 = (pc[3][i + 1][2] - pc[3][i + 1][0]) * (pc[3][i + 1][3] - pc[3][i + 1][1]);
        bestarea = min(bestarea, area1 + area2);
    }
    cout << optarea - bestarea << endl;
}
*/
