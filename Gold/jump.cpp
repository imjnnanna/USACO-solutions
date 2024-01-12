/*
#include <iostream>
#include <algorithm>
using namespace std;
int l, m, n;
int rock[50005];
bool lenwork(int x) {
    int safe = 0;
    int removed = 0;
    for(int i = 1; i <= n; i++) { // for each val, try removing it
        if(rock[i] - safe < x) removed++; // if gap is too small
        else safe = rock[i]; // update safe
    }
    if(removed > m) return false;
    return true;
}
int ans = -1;
void binarySearch(int l, int r) {
    if (r >= l) {
        int mid = l + (r - l) / 2; // mid = possible maximum minimum length
        if (lenwork(mid)) { // check if the minimum length is even possible
            ans = max(ans, mid); //
            binarySearch(mid + 1, r); // so you're actually trying to increase the minimum length
        }
        binarySearch(l, mid - 1);
    }
}
int main() {
    cin >> l >> n >> m;
    for(int i = 1; i <= n; i++) cin >> rock[i];
    rock[n + 1] = l;
    sort(rock, rock + n + 1);
    // rock = [0 2 11 14 17 21 25]
    binarySearch(0, l);
    cout << ans << endl;
}
*/
