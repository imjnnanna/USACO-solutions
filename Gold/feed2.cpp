/*
#include <iostream>
#include <algorithm>
using namespace std;
int k, e, n, dp[105][105]; // dp[ind of n][amount of hay] = min cost
struct store {
    int pos, cost, limit;
} nums[105];
bool comp(store a, store b) {
    return a.pos < b.pos;
}
int main() {
    cin >> k >> e >> n;
    for(int i = 1; i <= n; i++) cin >> nums[i].pos >> nums[i].limit >> nums[i].cost;
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= k; j++) dp[i][j] = 1000000000;
    }
    dp[1][0] = 0;
    sort(nums + 1, nums + 1 + n, comp);
    nums[n + 1].pos = e;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= k; j++){
            for(int l = 0; l <= nums[i].limit; l++) { // number of haybales bought
                if(j - l >= 0) dp[i][j] = min(dp[i][j], dp[i - 1][j - l] + nums[i].cost * l + j * (nums[i + 1].pos - nums[i].pos)); // adding haybales
                dp[i][j] = min(dp[i][j], dp[i - 1][j] + j * (nums[i + 1].pos - nums[i].pos)); // not adding any, just moving
            }
        }
    }
    cout << dp[n][k] << endl;
}
*/
