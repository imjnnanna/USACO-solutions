/*
#include <iostream>
#include <set>
using namespace std;
pair<int, int> point[205];
double slope(pair<int, int> a, pair<int, int> b) {
    return (a.second - b.second) / (double)(a.first - b.first);
}
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> point[i].first >> point[i].second;
    set<double> usedslopes;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            if(slope(point[i], point[j]) < 1000000000 && slope(point[i], point[j]) > -1000000000) usedslopes.insert(slope(point[i], point[j]));
            else usedslopes.insert(1000000000);
        }
    }
    cout << usedslopes.size() << endl;
}
*/
