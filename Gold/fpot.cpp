/*
#include <iostream>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;
int n, d, ans = 1000000000;
pair<int, int> rain[100005]; // position, time
int main() {
    cin >> n >> d;
    for(int i = 0; i < n; i++) cin >> rain[i].first >> rain[i].second;
    sort(rain, rain + n);
    int left = 0, right = 1;
    multiset<int> minmax;
    multiset<int>::iterator it;
    minmax.insert(rain[0].second);
    minmax.insert(rain[1].second);
    while(true) {
        if(right <= left || right >= n || left >= n) break;
        if(*minmax.rbegin() - *minmax.begin() >= d) { // if distance is possible
            if(*minmax.begin() - *minmax.rbegin() != 0) ans = min(ans, abs(rain[right].first - rain[left].first)); //
            it = minmax.find(rain[left].second);
            minmax.erase(it);
            if(right - left > 1) left++;
            else {
                right++;
                minmax.insert(rain[right].second);
                left++;
            }
        } else {
            right++;
            minmax.insert(rain[right].second);
        }
    }
    if(ans < 1000000000) cout << ans << endl;
    else cout << -1 << endl;
}
*/
