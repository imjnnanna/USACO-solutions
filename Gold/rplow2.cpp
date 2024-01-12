/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int x, y, rectnum;
struct rectangle {
    int minx, maxx, miny, maxy;
} rect[1005];
bool current[1005];
pair<int, pair<int, bool>> vertical[2005]; // index of vertical line, which rectangle it is, if it's the start point or the end point
int main() {
    cin >> x >> y >> rectnum;
    for(int i = 0; i < rectnum; i++) {
        cin >> rect[i].minx >> rect[i].miny >> rect[i].maxx >> rect[i].maxy;
        rect[i].maxx++; rect[i].maxy++;
    }
    for(int i = 0; i < rectnum; i++) {
        vertical[i] = make_pair(rect[i].minx, make_pair(i, true));
        vertical[i + rectnum] = make_pair(rect[i].maxx, make_pair(i, false));
    }
    sort(vertical, vertical + rectnum * 2);
    int ans = 0;
    vector<pair<int, bool>> startends; // 0 = start, 1 = end
    for(int i = 0; i < rectnum * 2 - 1; i++) {
        current[vertical[i].second.first] = vertical[i].second.second;
        startends.clear();
        for(int j = 0; j < rectnum; j++) {
            if(!current[j]) continue; // if rectangle is currently not being visited in vertical line
            startends.push_back(make_pair(rect[j].miny, true));
            startends.push_back(make_pair(rect[j].maxy, false));
        }
        if(startends.empty()) continue;
        sort(startends.begin(), startends.end());
        int count = 0, currentans = 0;
        for(int j = 0; j < startends.size() - 1; j++) {
            if(startends[j].second) count++; // start of a range
            else count--; // end of a range
            if(count > 0) currentans += startends[j + 1].first - startends[j].first;
        }
        ans += currentans * (vertical[i + 1].first - vertical[i].first);
    }
    cout << ans << endl;
}
*/
