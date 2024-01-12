/*
#include<iostream>
using namespace std;
struct charm {
    int desire, weight;
};
int n, m;
charm nums[3410];
int dp[2][12885];
int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> nums[i].weight >> nums[i].desire;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (nums[i - 1].weight <= j) dp[1][j] = max(nums[i - 1].desire + dp[0][j - nums[i - 1].weight], dp[0][j]);
            else dp[1][j] = dp[0][j];
        }
        swap(dp[0], dp[1]);
    }
    cout << dp[0][m] << endl;
}
*/
