/*
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
pair<int, int> cow[100005];
int main() {
    int n, d;
    cin >> n >> d;
    for (int i = 0; i < n; i++) cin >> cow[i].first >> cow[i].second;
    sort(cow, cow + n);
    multiset<pair<int, int>> before, after;
    int l = 0, r = 0, ans = 0;
    for (int mid = 0; mid < n - 1; mid++){
        while(cow[l].first < cow[mid].first - d && l != mid && l < n){
            before.erase(before.find(make_pair(cow[l].second, cow[l].first)));
            l++;
        }
        while(r < n) {
            if(cow[r].first > cow[mid].first + d) break;
            after.insert(make_pair(cow[r].second, cow[r].first));
            r++;
        }
        after.erase(after.find(make_pair(cow[mid].second, cow[mid].first)));
        if(!before.empty() && !after.empty()){
            if(before.rbegin()->first >= 2 * cow[mid].second && after.rbegin()->first >= 2 * cow[mid].second) ans++;
        }
        before.insert(make_pair(cow[mid].second, cow[mid].first));
    }
    cout << ans << endl;
}

*/
