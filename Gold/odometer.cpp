/*
#include <iostream>
#include <set>
using namespace std;
char temp;
bool half(string s) {
    multiset<char> ans;
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        temp = s[i];
        ans.insert(temp);
        if(ans.count(temp) > count) count = ans.count(temp);
    }
    if(s.length() % 2 == 0 && count >= s.length() / 2) return true;
    if(s.length() % 2 == 1 && count >= (s.length() + 1) / 2) return true;
    return false;
}
int main() {
    int x, y;
    cin >> x >> y;
    int ans = 0;
    for(int i = x; i <= y; i++) {
        string s = to_string(i);
        if(half(s)) ans++;
    }
    cout << ans << endl;
}
*/
/*
 we can count the moos before Y and subtract the moos before X-1 to get out answer.
 Now we just need a function to count the moos before a value X.
 We will do a dp for each digit (from 1 to 9) to see how many times that digit is at least half of all the digits.
 Define dp[i: current position in the number][und: true/false are you below the actual number][k: counter to check if there is at least half of the current digit][is0: true/false are there leading 0s] = number of ways to do this.
 Since we don’t want k to be negative, let’s start it at anything 19 (because the constraint is <= 10^18 so there can be a maximum of 19 digits).
 There are 9 transitions; each digit from 1 to 9 is placed at location i+1.
 If we add 1 to k every time the digit is the current digit and subtract one every time it isn’t, then we add all the states where k >= 19 and i is at the last location.
 At the end we have to subtract the cases that are double counted (like 1122) so we repeat the dp.
 This time, we loop through all pairs of digits a and b and to k++ when we add digit a and k-- when we add digit b.
 We subtract all the states where k=19 and i is at the last location because those are all the ones that are double counted.
 */
