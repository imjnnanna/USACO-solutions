/*
#include <iostream>
using namespace std;
#define int long long
int n, d, chocolate[50005], output = 0;
int possible(int happiness) {
    int current = 0, chocind = 0, ans = 1000000000000000000;
    for(int i = 0; i < d; i++) {
        while(current < happiness) {
            if(chocind == n) return -1;
            current += chocolate[chocind];
            chocind++;
        }
        ans = min(ans, current);
        current /= 2;
    }
    return ans;
}
main() {
    cin >> n >> d;
    for(int i = 0; i < n; i++) cin >> chocolate[i];
    int l = 0, r = 1000000000000000000;
    while(r >= l) {
        int mid = (l + r) / 2;
        int minhap = possible(mid);
        if(minhap != -1 && minhap >= output) {
            output = minhap;
            l = mid + 1;
            continue;
        }
        r = mid - 1;
    }
    cout << output << endl;
    int current = 0, chocind = 0;
    for(int i = 0; i < d; i++) {
        while(current < output) {
            current += chocolate[chocind];
            cout << i + 1 << endl;
            chocind++;
        }
        current /= 2;
    }
    for(int i = 0; i < n - chocind; i++) cout << d << endl;
}
*/
