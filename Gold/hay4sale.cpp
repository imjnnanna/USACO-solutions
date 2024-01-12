/*
#include <iostream>
using namespace std;
int h, c;
int w[5010];
bool dp[50010];
int main() {
    cin >> c >> h;
    for(int i = 1; i <= h; i++) cin >> w[i];
    dp[0] = true;
    int maxx = 0;
    for(int i = 1; i <= h; i++) {
        for(int j = c; j >= 0; j--) {
            if(dp[j] == true && j + w[i] <= c) dp[j + w[i]] = true;
            if(dp[j] == true && j > maxx) maxx = j;
            if(j + w[i] <= c && dp[j + w[i]] == true && j + w[i] > maxx) maxx = j + w[i];
        }
    }
    cout << maxx << endl;
}
*/
