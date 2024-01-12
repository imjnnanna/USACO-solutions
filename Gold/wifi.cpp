/*
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int n, a, b, arr[2005];
double dp[2005];
double solve(int ind) {
    double ans, cost, dist;
    if(dp[ind] == -1) {
        ans = 1000000000;
        for(int i = ind; i < n; i++) {
            dist = (arr[i] - arr[ind]) / 2.0;
            cost = a + b * dist + solve(i + 1);
            ans = min(cost, ans);
        }
        dp[ind] = ans;
    }
    return dp[ind];
}
int main() {
    cin >> n >> a >> b;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    for(int i = 0; i < n; i++) dp[i] = -1;
    dp[n] = 0;
    double ans = solve(0);
    if((int)ans == ans) cout << (int)ans << endl;
    else cout << fixed << setprecision(1) << ans << endl;
}
*/
