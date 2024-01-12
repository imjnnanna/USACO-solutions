/*
#include <iostream>
using namespace std;
int n, dp[5][2505];
int ways(int cut, int lengthleft) { // return 0 if impossible combination, else return number of ways
    if(cut == 4) {
        if(lengthleft == 0) return 1;
        else return 0;
    }
    if(cut != 4 && lengthleft == 0) return 0;
    if(dp[cut][lengthleft] == -1) {
        int ans = 0;
        for(int i = 1; i < (n+1) / 2 && lengthleft - i >= 0; i++) {
            ans += ways(cut + 1, lengthleft - i);
        }
        dp[cut][lengthleft] = ans;
    }
    return dp[cut][lengthleft];
}
int main() {
    cin >> n;
    for(int i = 0; i < 2505; i++) dp[0][i] = dp[1][i] = dp[2][i] = dp[3][i] = dp[4][i] = -1;
    cout << ways(0, n) << endl;
}
*/
