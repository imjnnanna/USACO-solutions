/*
#include <iostream>
#include <cmath>
using namespace std;
int rib[3], n;
int cut(int nn) {
    if (nn == 0) return 0;
    int result = 2147483647;
    for (int i = 0; i < 3; i++) {
        int min = cut(nn - rib[i]);
        if (rib[i] <= nn && min != 2147483642 && min + 1 < result) result = min + 1;
    }
    return result;
}
int main() {
    cin >> n >> rib[0] >> rib[1] >> rib[2];
    cout << cut(n) << endl;
}
*/
/*
int dp[100001];
for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
        dp[i + c[j]] = min(dp[i + c[j]], dp[i] + 1);
    }
}
*/
