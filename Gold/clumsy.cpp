/*
#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int count = 0, ans = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(') count++;
        else count--;
        
        if(count == -1) { // if closed brackets before opening
            ans++;
            count = 1;
        }
    }
    if(count > 0) ans += (count / 2); // if too many open brackets
    cout << ans << endl;
}
*/
