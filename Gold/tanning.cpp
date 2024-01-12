/*
#include <iostream>
#include <algorithm>
using namespace std;
bool comp1(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}
bool comp2(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}
pair<int, int> cow[2505], lotion[2505];
int main(){
    int c, l, ans = 0;
    cin >> c >> l;
    for(int i = 1; i <= c; i++) cin >> cow[i].first >> cow[i].second;
    for(int i = 1; i <= l; i++) cin >> lotion[i].first >> lotion[i].second;
    sort(cow + 1, cow + c + 1, comp1);
    sort(lotion + 1, lotion + l + 1, comp2);
    for (int i = 1; i <= c; i++) {
        for (int j = 1; j <= l; j++) {
            if(lotion[j].first >= cow[i].first && lotion[j].first <= cow[i].second && lotion[j].second > 0) {
                lotion[j].second--;
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
}
*/
