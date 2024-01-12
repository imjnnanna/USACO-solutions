/*
#include <iostream>
using namespace std;
int n, m, day[100005], ans = 1000000000;
bool possible(int x) {
    int months = 0, count = 0;
    for(int i = 0; i < n; i++) {
        if(day[i] > x) return false;
        if(count + day[i] > x) {
            months++;
            count = 0;
        }
        count += day[i];
    }
    if(months >= m) return false;
    return true;
}
void binarySearch(int l, int r) {
    if(r < l) return;
    int mid = l + (r - l) / 2;
    if (possible(mid)) {
        ans = min(ans, mid);
        return binarySearch(l, mid - 1);
    }
    if (!possible(mid)) return binarySearch(mid + 1, r);
}
int main() {
    cin >> n >> m;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> day[i];
        sum += day[i];
    }
    binarySearch(0, sum);
    cout << ans << endl;
}
*/
