/*
#include <iostream>
#include <algorithm>
using namespace std;
int n;
pair<int, int> cow[1005];
bool comp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> cow[i].first >> cow[i].second;
    sort(cow, cow + n);
    int xline, yline;
    xline = cow[(n + 1) / 2].first - 1;
    sort(cow, cow + n, comp);
    yline = cow[(n + 1) / 2].second - 1;
    int topleft = 0, topright = 0, bottomleft = 0, bottomright = 0;
    for(int i = 0; i < n; i++) {
        if(cow[i].first < xline && cow[i].second < yline) bottomleft++;
        else if(cow[i].first < xline && cow[i].second > yline) topleft++;
        else if(cow[i].first > xline && cow[i].second < yline) bottomright++;
        else bottomleft++;
    }
    cout << max(max(topleft, topright), max(bottomleft, bottomright)) << endl;
}
 */
/*
sort by x value
draw a line right in the middle or slightly off
sort by y value
draw a line right in the middle or slightly off
count how many are in each quadrant
return max of four quadrants
*/
/*
#include <iostream>
#include <algorithm>
using namespace std;
int n;
pair<int, int> cow[1005];
bool comp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}
int main() {
    cin >> n;
    int minx = 1000000000, miny = 1000000000, maxx = 0, maxy = 0;
    for(int i = 0; i < n; i++) {
        cin >> cow[i].first >> cow[i].second;
        minx = min(minx, cow[i].first);
        miny = min(miny, cow[i].second);
        maxx = max(maxx, cow[i].first);
        maxy = max(maxy, cow[i].second);
    }
    int ans = 1000000000;
    int topleft = 0, topright = 0, bottomleft = 0, bottomright = 0;
    for(int xline = minx + 1; xline < maxx - 1; xline += 2) {
        for(int yline = miny + 1; yline < maxy - 1; yline += 2) {
            topleft = 0, topright = 0, bottomleft = 0, bottomright = 0;
            for(int i = 0; i < n; i++) {
                if(cow[i].first < xline && cow[i].second < yline) bottomleft++;
                else if(cow[i].first < xline && cow[i].second > yline) topleft++;
                else if(cow[i].first > xline && cow[i].second < yline) bottomright++;
                else topright++;
            }
            ans = min(ans, max(max(topleft, topright), max(bottomleft, bottomright)));
        }
    }
    cout << ans << endl;
}
*/
