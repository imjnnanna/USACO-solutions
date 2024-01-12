/*
#include <iostream>
#include <algorithm>
using namespace std;
struct obst {
    int ind, point;
};
bool comp1(obst a, obst b) {
    return a.ind < b.ind;
}
bool comp2(obst a, obst b) {
    return a.ind > b.ind;
}
obst arr[1005];
int n, finalmax = -1;
int dp[1005][1005]; // dp[position][latest jump] = points
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> arr[i].ind >> arr[i].point;
    sort(arr + 1, arr + n + 1, comp1);
    for(int j = 1; j <= n; j++) { // left to right
        int k = j - 1;
        for(int i = j + 1; i <= n; i++) {
            int maxx = 0;
            while(k > 0 && arr[j].ind - arr[k].ind <= arr[i].ind - arr[j].ind) {
                maxx = max(maxx, dp[j][k]);
                k--;
            }
            if(maxx != 0) dp[i][j] = maxx + arr[i].point;
            else dp[i][j] = arr[i].point + arr[j].point;
            dp[i][j] = max(dp[i - 1][j] - arr[i - 1].point + arr[i].point, dp[i][j]);
        }
    }
    for(int i = 1; i <= n; i++) { // reset dp while also taking max of dp
        for(int j = 1; j <= n; j++) {
            finalmax = max(finalmax, dp[i][j]);
            dp[i][j] = 0;
        }
    }
    sort(arr + 1, arr + n + 1, comp2);
    for(int j = 1; j <= n; j++) { // right to left
        int k = j - 1;
        for(int i = j + 1; i <= n; i++) {
            int maxx = 0;
            while(k > 0 && arr[k].ind - arr[j].ind <= arr[j].ind - arr[i].ind) {
                maxx = max(maxx, dp[j][k]);
                k--;
            }
            if(maxx != 0) dp[i][j] = maxx + arr[i].point;
            else dp[i][j] = arr[i].point + arr[j].point;
            dp[i][j] = max(dp[i - 1][j] - arr[i - 1].point + arr[i].point, dp[i][j]);
            
        }
    }
    for(int i = 1; i <= n; i++) { // reset dp while also taking max of dp
        for(int j = 1; j <= n; j++) {
            finalmax = max(finalmax, dp[i][j]);
            dp[i][j] = 0;
        }
    }
    cout << finalmax << endl;
}
*/
