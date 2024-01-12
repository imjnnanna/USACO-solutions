/*
#include <iostream>
#include <algorithm>
using namespace std;
pair<int, int> coin[25];
int n, c;
bool comp(pair<int, int> a, pair<int, int> b) {
    return a.first > b.first;
}
int main() {
    cin >> n >> c;
    for(int i = 0; i < n; i++) cin >> coin[i].first >> coin[i].second;
    sort(coin, coin + n, comp);
    int count = 0;
    while(true) {
        int current = 0;
        for(int i = 0; i < n; i++) {
            while(current + coin[i].first < c && coin[i].second > 0) {
                current += coin[i].first;
                coin[i].second--;
            }
        }
        for(int i = n - 1; i >= 0; i--) {
            if(current < c && coin[i].second > 0) {
                current += coin[i].first;
                coin[i].second--;
                break;
            }
        }
        if(current >= c) count++;
        else break;
    }
    cout << count << endl;
}
*/
