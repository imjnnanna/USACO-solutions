/*
#include <iostream>
using namespace std;
bool isround(int n) {
    int zero = 0, one = 0;
    while (n > 0) {
        if(n % 2 == 0) zero++;
        else one++;
        n /= 2;
    }
    if(zero >= one) return true;
    return false;
}
int main() {
    int start, end;
    cin >> start >> end;
    int ans = 0;
    for(int i = start; i <= end; i++) {
        if(isround(i)) ans++;
    }
    cout << ans << endl;
}
 */
/*
 same as solving all the numbers from 1 to finish and subtracting the numbers from 1 to start-1.
 Now we need to be able to solve the problem from 1 to val.
 we can make a dp array such that dp[x][y] = the number of ways to have x 1’s and y 0’s.
 This is the same as the dp function (nCr). dp[x][y] = dp[x-1][y] + dp[x][y-1]
 because we could add a 1 to the beginning of all the dp[x-1][y]
 or add a 0 to the beginning to all dp[x][y-1].
 We now loop through all the bits of val from greatest to smallest value (64, 32, ..., 2, 1).
 If the bit is a 1, then we have two options: putting a 1 there or putting a 0.
 If we put a 0, we can put anything in the rest of the bits
 so we count the number of 1 bits and 0 bits that we already took
 (in greater bits and the of val and a 0 for the current bit)
 and add all the dp[x][y] such that
 x + y = (number of remaining bits) + (0’s we already took) + y  > (1’s we already took) + x to the answer.
 We then put a 1 in that bit and continue looping.
 If it a 0, we don’t do anything.
 */
/*
#include <iostream>
#include <algorithm>
using namespace std;
int dp[65][65]; // number of ones, number of zeros
int roundnum(int bits, int zeros, int top) {
    int ans = 0;
    if (zeros > bits || top == 0) return 0;
    if (top >= (1 << bits)) {
        for (int j = max(zeros, 0); j <= bits; j++) ans += dp[bits][j];
        return ans;
    }
    ans += roundnum(bits - 1, zeros - 1, top);
    int h = 1 << (bits - 1);
    if (top > h && bits > zeros) ans += roundnum(bits - 1, zeros, top - h);
    return ans;
}
int main() {
    int start, end;
    cin >> start >> end;
    for (int i = 0; i < 64; i++) dp[i][0] = dp[i][i] = 1;
    for(int i = 0; i < 64; i++) {
        for (int j = 1; j < i; j++) dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
    }
    int ans = 0;
    for (int i = 1; i <= 31; i++) {
        int st = max(start, 1 << (i - 1));
        if(st < end + 1) ans += roundnum(i, (i + 1) / 2, end + 1) - roundnum(i, (i + 1) / 2, st);
    }
    cout << ans << endl;
}
*/
