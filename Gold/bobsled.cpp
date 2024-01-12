/*
#include <iostream>
#include <algorithm>
using namespace std;
int l, n, deccelerate[100005], accelerate[100005];
pair<int, int> locs[100005];
int main() {
    cin >> l >> n;
    locs[0].second = 1; locs[n + 1].first = l; locs[n + 1].second = 1000000000;
    for(int i = 1; i <= n; i++) cin >> locs[i].first >> locs[i].second;
    sort(locs, locs + n + 2);
    deccelerate[n + 1] = 1000000000;
    for(int i = n; i >= 0; i--) deccelerate[i] = min(deccelerate[i + 1] + locs[i + 1].first - locs[i].first, locs[i].second);
    int ans = 0;
    accelerate[0] = 1;
    for(int i = 1; i <= n + 1; i++) accelerate[i] = min(accelerate[i - 1] + locs[i].first - locs[i - 1].first, deccelerate[i]);
    for(int i = 1; i <= n + 1; i++) ans = max(ans, max(accelerate[i], accelerate[i - 1]) + (locs[i].first - locs[i - 1].first - abs(accelerate[i] - accelerate[i - 1])) / 2);
    cout << ans << endl;
}
*/
