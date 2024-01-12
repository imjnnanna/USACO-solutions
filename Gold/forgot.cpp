/*
#include <iostream>
#include <algorithm>
using namespace std;
string dp[1005];
string dict[1005];
int main() {
    int l, nw;
    string password;
    cin >> l >> nw >> password;
    bool ean = true;
    for(int i = 0; i < nw; i++) cin >> dict[i];
    for(int i = 0; i < l; i++) dp[i] = "{}";
    dp[l] = "";
    sort(dict, dict + nw);
    for(int i = l - 1; i >= 0; i--) {
        for(int j = 0; j < nw; j++) {
            if(dict[j].length() > l - i) continue;
            ean = true;
            for(int k = 0; k < dict[j].length(); k++) {
                if(password[i + k] != '?' && password[i + k] != dict[j][k]) ean = false;
            }
            if(ean) {
                if(dp[i + dict[j].length()] != "{}") dp[i] = min(dp[i], dict[j] + dp[i + dict[j].length()]);
            }
        }
    }
    cout << dp[0] << endl;
}
*/
