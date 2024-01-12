/*
#include <iostream>
#include <string>
using namespace std;
int dp[1005][1005];
int main() {
    string a = " ", b = " ";
    string x, y;
    cin >> x >> y;
    a += x;
    b += y;
    int maxx = 0;
    int alen = a.length();
    int blen = b.length();
    for(int i = 1; i < alen; i++) {
        for(int j = 1; j < blen; j++) {
            if(a[i] == b[j]) {
                if(i == 1 || j == 1) dp[i][j] = 1;
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else dp[i][j] = 0;
            maxx = max(maxx, dp[i][j]);
        }
    }
    cout << maxx << endl;
}
*/
