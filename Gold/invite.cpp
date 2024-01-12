/*
#include <iostream>
#include <algorithm>
#include <set>
#include <queue>
using namespace std; // n <= 1,000,000
bool processed[1000005];
int main() {
    int n, g;
    cin >> n >> g;
    vector<int> vgroups[n + 10];
    set<int> setgroups[g + 10];
    for(int i = 0; i < g; i++) {
        int x;
        cin >> x;
        for(int j = 0; j < x; j++) {
            int cow;
            cin >> cow;
            vgroups[cow].push_back(i);
            setgroups[i].insert(cow);
        }
    }
    queue<int> tbp; // to be processed lol
    tbp.push(1);
    int ans = 0;
    while (!tbp.empty()) {
        int next = tbp.front();
        tbp.pop();
        if (!processed[next]) {
            processed[next] = true;
            ans++;
            for (int group = 0; group < vgroups[next].size(); group++) {
                setgroups[vgroups[next][group]].erase(next);
                if (setgroups[vgroups[next][group]].size() == 1) tbp.push(*setgroups[vgroups[next][group]].begin());
            }
        }
    }
    cout << ans << endl;
}
*/
