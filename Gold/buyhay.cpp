/*
#include <iostream>
using namespace std;
int n, h, lbs[105], cost[105];
int dp[20005]; // dp[cost] = maximum hay FJ can buy at that cost
int main() {
    cin >> n >> h;
    for(int i = 1; i <= n; i++) cin >> lbs[i] >> cost[i]; //inputing...
    for(int i = 1; i <= 20000; i++) dp[i] = -1000000000;//set dp to negative
    
    for(int i = 1; i <= n; i++) { // going through each lbs[i] and cost[i]
        for(int j = 1; j <= 20000; j++) { // going through each cost
            if(j - cost[i] >= 0) dp[j] = max(dp[j], dp[j - cost[i]] + lbs[i]);
        }
    }
    for(int i = 1; i <= 20000; i++) {
        if(dp[i] >= h) {
            cout << i << endl;
            break;
        }
    }
}
*/
