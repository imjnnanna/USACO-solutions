/*
#include <iostream>
#include <string>
using namespace std;
int dp[1005][1005];
int main() {
    string a, b;
    cin >> a >> b;
    int alen = a.length();
    int blen = b.length();
    
    if(a[0] == b[0]) dp[0][0] = 1;
    for(int i = 1; i < alen; i++) {
        if(a[i] == b[0]) dp[i][0] = 1;
        else dp[i][0] = dp[i - 1][0];
    }
    for(int i = 1; i < blen; i++) {
        if(a[0] == b[i]) dp[0][i] = 1;
        else dp[0][i] = dp[0][i - 1];
    }
    
    for(int i = 1; i < alen; i++) {
        for(int j = 1; j < blen; j++) {
            if(a[i] == b[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    }
    cout << dp[alen - 1][blen - 1] << endl;
}
*/
