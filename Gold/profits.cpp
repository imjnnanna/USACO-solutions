/*
#include <iostream>
using namespace std;
int n, nums[100005], dp[100005];
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> nums[i];
    }
    int maxn = -1005;
    for(int i = 1; i <= n; i++) {
        dp[i] = max(nums[i], dp[i - 1] + nums[i]);
        maxn = max(maxn, dp[i]);
    }
    cout << maxn << endl;
}
*/
