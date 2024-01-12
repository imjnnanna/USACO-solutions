/*
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int n, tmax;
int order[10005];
priority_queue<int> cowtime;
int onstage(int k) {
    int a;
    for(int i = 1; i <= k; i++) {
        a = -1 * order[i];
        cowtime.push(a);
    }
    for(int i = k + 1; i <= n; i++) {
        a = cowtime.top();
        cowtime.pop();
        cowtime.push(a - order[i]);
    }
    while(cowtime.size() > 1) {
        cowtime.pop();
    }
    a = cowtime.top();
    cowtime.pop();
    return -1 * a;
}
int ans = 550;
void binarySearch(int l, int r) {
    if (r == l) return;
    int mid = (l + r) / 2;
    if (onstage(mid) <= tmax) {
        ans = min(ans, mid);
        if(onstage(mid - 1) > tmax) return;
        binarySearch(l, mid);
    } else binarySearch(mid + 1, r);
}
int main() {
    cin >> n >> tmax;
    for(int i = 1; i <= n; i++) {
        cin >> order[i];
    }
    binarySearch(1, n);
    cout << ans << endl;
}
*/
