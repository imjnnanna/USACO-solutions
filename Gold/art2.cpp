/*
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int n, paint[100005];
pair<int, int> startends[100005];
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> paint[i];
        if(i == 0) startends[paint[i]].first = 0;
        else if(startends[paint[i]].first == 0) startends[paint[i]].first = i; // storing the indices of the start and end points of a color
        startends[paint[i]].second = i; // so startends[color].first = index of starting point, startends[color].second = index of ending point
    }
    // use a stack - add if it's the top, if it ends and if it's the top we remove it, else it's impossible; max size of set is answer
    int ans = -1;
    stack<int> stends;
    for(int i = 0; i < n; i++) {
        if(paint[i] == 0) continue;
        if(startends[paint[i]].first == i) stends.push(paint[i]);
        if(stends.size() > ans || ans == -1) ans = stends.size();
        if(startends[paint[i]].second == i) {
            if(stends.top() == paint[i]) stends.pop();
            else {
                cout << -1 << endl;
                return 0;
            }
        }
    }
    if((ans + 1) % 10000 == 0) ans++;
    cout << ans << endl;
}
*/
