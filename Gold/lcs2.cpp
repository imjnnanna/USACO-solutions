/*
#include <iostream>
#include <string>
using namespace std;
int dp[2][10005];
int main() {
    string a = " ", b = " ";
    string x, y;
    cin >> x >> y;
    a += x;
    b += y;
    int alen = a.length();
    int blen = b.length();
    for(int i = 1; i <= alen; i++) {
        for(int j = 1; j <= blen; j++) {
            if(a[i] == b[j]) dp[1][j] = dp[0][j - 1] + 1;
            else dp[1][j] = max(dp[1][j - 1], dp[0][j]);
        }
        swap(dp[0], dp[1]);
    }
    cout << dp[0][blen - 1] << endl;
}
*/
