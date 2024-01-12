/*
#include <iostream>
using namespace std;
#define int long long
int n, k, room[205], dp[205][8];
int dfs(int door, int left, int lastdoor) {
    if(left == 0) {
        int walk = 0;
        int numofdoors = 0;
        for(int i = lastdoor; i < door + n; i++) {
            walk += room[i % n] * numofdoors;
            numofdoors++;
        }
        return walk;
    }
    if(dp[lastdoor % n][left] == 1000000000) {
        for(int i = lastdoor + 1; i < door + n; i++) {
            int walk = 0;
            int numofdoors = 0;
            for(int j = lastdoor; j < i; j++) {
                walk += room[j % n] * numofdoors;
                numofdoors++;
            }
            dp[lastdoor % n][left] = min(dp[lastdoor % n][left], dfs(door, left - 1, i) + walk);
        }
    }
    return dp[lastdoor % n][left];
}
main() {
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> room[i];
        room[i + n] = room[i];
    }
    int ans = 1000000000;
    for(int start = 0; start < n; start++) {
        for(int i = 0; i < 205; i++) {
            for(int j = 0; j < 8; j++) dp[i][j] = 1000000000;
        }
        ans = min(ans, dfs(start, k - 1, start));
    }
    cout << ans << endl;
    
    for(int i = 0; i < 2 * n; i++) {
        for(int j = 0; j < 8; j++) dp[i][j] = 1000000000;
    }
}
*/
