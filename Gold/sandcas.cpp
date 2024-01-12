/*
#include <iostream>
#include <algorithm>
using namespace std;
int n, x, y, a[25005], b[25005];
int main() {
    cin >> n >> x >> y;
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
    int cost = 0;
    sort(a, a + n);
    sort(b, b + n);
    for(int i = 0; i < n; i++) {
        if(a[i] < b[i]) cost += (b[i] - a[i]) * x; // add
        else if(a[i] > b[i]) cost += (a[i] - b[i]) * y; // reduce
    }
    cout << cost << endl;
}
*/
