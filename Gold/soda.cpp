/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
vector<pair<int, bool>> soda; // 0 = start, 1 = end;
bool comp(pair<int, bool> a, pair<int, bool> b) {
    if(a.first != b.first) return a.first < b.first;
    else return a.second < b.second;
}
int main() {
    cin >> n;
    int start, end;
    for(int i = 1; i <= n; i++) {
        cin >> start >> end;
        soda.push_back(make_pair(start, false));
        soda.push_back(make_pair(end, true));
    }
    sort(soda.begin(), soda.end(), comp);
    int count = 1, ans = -1;
    for(int i = 1; i <= 2 * n; i++) {
        if(soda[i].second == false) count++;
        else count--;
        ans = max(ans, count);
    }
    cout << ans << endl;
}
*/
