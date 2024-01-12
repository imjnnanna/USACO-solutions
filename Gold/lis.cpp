/*
#include <iostream>
using namespace std;
int n, nums[20005], dp[20005];
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    for(int i = 0; i < n; i++) {
        dp[i] = 1;
        for(int j = i - 1; j >= 0; j--) {
            if(nums[j] < nums[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    int maxn = -1;
    for(int i = 0; i < n; i++) {
        maxn = max(maxn, dp[i]);
    }
    cout << maxn << endl;
}
*/
