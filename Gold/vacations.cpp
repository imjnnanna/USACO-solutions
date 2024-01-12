/*
#include <iostream>
using namespace std;
int n;
int days[105]; // days of rest
int dp[105]; // dp[index] = days of rest
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> days[i];
    }
    
    int previousActivity = 0;
    for(int i = 1; i <= n; i++) { // days[i]
        // have to rest
        if(days[i] == 0) {
            dp[i] = dp[i - 1] + 1;
            previousActivity = 0;
        }
        //if contest available
        else if(days[i] == 1) {
            if(previousActivity != 1) {
                dp[i] = dp[i - 1];
                previousActivity = 1;
            }
            else {
                dp[i] = dp[i - 1] + 1;
                previousActivity = 0;
            }
        }
        // if gym available
        else if(days[i] == 2){
            if(previousActivity != 2){
                dp[i] = dp[i - 1];
                previousActivity = 2;
            }
            else {
                dp[i] = dp[i - 1] + 1;
                previousActivity = 0;
            }
        }
        // if both available, days[i] == 3
        else {
            // if previous activity is 1, then do 2
            if(previousActivity == 1) {
                dp[i] = dp[i - 1];
                previousActivity = 2;
            }
            // if previous activity is 2, then do 1
            else if(previousActivity == 2) {
                dp[i] = dp[i - 1];
                previousActivity = 1;
            }
            // if previous activity is 0, then check future if possible
            else {
                if(i + 1 <= n && days[i + 1] == 1) {
                    dp[i] = dp[i - 1];
                    previousActiviy = 2;
                }
                else if(i + 1 <= n && days[i + 1] == 2) {
                    dp[i] = dp[i - 1];
                    previousActivity = 1;
                }
                else { // either i == n, or days[i + 1] == 0
                    dp[i] = dp[i - 1];
                    previousActivity = 0;
                }
            }
        }
    }
    cout << dp[n] << endl;
}
*/
