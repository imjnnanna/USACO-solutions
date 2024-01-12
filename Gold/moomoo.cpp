/*
#include <iostream>
using namespace std;
int b, n, breedvolume[25], temp[105], field[105], dp[100005];
bool vis[100005];
int main() {
    cin >> n >> b;
    for(int i = 1; i <= b; i++) cin >> breedvolume[i];
    for(int i = 1; i <= n; i++) {
        cin >> temp[i];
        field[i] = temp[i];
    }
    for(int i = 1; i <= n; i++) {
        if(temp[i - 1] == 0) field[i] = temp[i];
        else field[i] = max(-temp[i - 1] + temp[i] + 1, 0);
    }
    int ans = 0;
    for(int k = 1; k <= n; k++) { // k = 2, add 3. k = 4, add 1.
        if(field[k] == 0) continue;
        for(int i = 1; i <= field[k]; i++) {
            dp[i] = 1000000000;
            vis[i] = false;
        }
        vis[0] = true;
        dp[0] = 0; // minimum number of cows
        for(int i = 1; i <= b; i++) { // run through each breed's volumes
            for(int j = 0; j <= field[k]; j++) { // run through to see if a certain volume is possible
                if(vis[j] > 0 && j + breedvolume[i] <= field[k]) { // if there is a way to get there and in bounds
                    vis[j + breedvolume[i]] = true;
                    dp[j + breedvolume[i]] = min(dp[j + breedvolume[i]], dp[j] + 1);
                }
            }
        }
        ans += dp[field[k]];
    }
    cout << ans << endl;
}
*/
