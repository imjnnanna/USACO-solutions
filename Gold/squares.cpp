/*
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int n, k, ans = -1;
pair<int, int> center[50005];
int main() {
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> center[i].first >> center[i].second;
    sort(center, center + n);
    // for(int i = 0; i < n; i++) cout << i << ' ' << center[i].first << " " << center[i].second << endl;
    int left = 0, right = 1;
    set<pair<int, int>> minmax;
    set<pair<int, int>> revmm;
    minmax.insert(make_pair(center[0].second, center[0].first));
    revmm.insert(make_pair(center[0].first, center[0].second));
    pair<pair<int, int>, pair<int, int>> answer = make_pair(make_pair(0, 0), make_pair(0, 0));
    while(right >= left && right < n && left < n) { // using two-counters
        if(right == left || center[right].first - revmm.begin()->first < k) { // if x-values are within k
            minmax.insert(make_pair(center[right].second, center[right].first));
            revmm.insert(make_pair(center[right].first, center[right].second));
            if(right == left) {
                right++;
                continue;
            }
            auto itself = minmax.lower_bound(make_pair(center[right].second, center[right].first));
            itself++;
            if(itself != minmax.end() && abs(itself->first - center[right].second) < k) { // check y-values
                if(answer == make_pair(make_pair(0, 0), make_pair(0, 0))) {
                    answer = make_pair(make_pair(center[right].first, center[right].second), make_pair(itself->second, itself->first));
                } else {
                    cout << -1 << endl;
                    return 0;
                }
            }
            itself--; itself--;
            if(itself != minmax.end() && abs(itself->first - center[right].second) < k) { // check y-values
                if(answer == make_pair(make_pair(0, 0), make_pair(0, 0))) {
                    answer = make_pair(make_pair(center[right].first, center[right].second), make_pair(itself->second, itself->first));
                } else {
                    cout << -1 << endl;
                    return 0;
                }
            }
            right++;
        } else {
            auto it = minmax.find(make_pair(center[left].second, center[left].first));
            auto it2 = revmm.find(make_pair(center[left].first, center[left].second));
            minmax.erase(it);
            revmm.erase(it2);
            left++;
        }
    }
    if(answer == make_pair(make_pair(0, 0), make_pair(0, 0))) cout << 0 << endl;
    else {
        int x1 = max(answer.first.first - k / 2, answer.second.first - k / 2);
        int y1 = max(answer.first.second - k / 2, answer.second.second - k / 2);
        int x2 = min(answer.second.first + k / 2, answer.first.first + k / 2);
        int y2 = min(answer.second.second + k / 2, answer.first.second + k / 2);
        cout << abs(x1 - x2) * abs(y1 - y2) << endl;
    }
}
*/
