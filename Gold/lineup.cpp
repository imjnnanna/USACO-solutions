/*
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int n;
pair<int, int> cows[50000];
map<int, int> breeds;
set<int> setid;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> cows[i].first >> cows[i].second;
        setid.insert(cows[i].second);
        breeds[cows[i].second] = 0;
    }
    sort(cows, cows + n);
    int x = 0, start = 0, end = 0, min = 1000000000;
    while(1 == 1) {
        while(x != setid.size() && end < n) {
            if(breeds[cows[end].second] == 0) x++;
            breeds[cows[end].second]++;
            end++;
        }
        if(end == n && x != setid.size()) break;
        while(breeds[cows[start].second] > 1) {
            breeds[cows[start].second]--;
            start++;
        }
        if(cows[end - 1].first - cows[start].first < min) min = cows[end - 1].first - cows[start].first;
        breeds[cows[start++].second]--;
        x--;
    }
    cout << min << endl;
}
*/
