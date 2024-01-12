/*
#include <iostream>
#include <algorithm>
using namespace std;
int n;
bool comp(int a, int b) {
    return a > b;
}
int main() {
    cin >> n;
    int b[n + 1], e[n + 1];
    int esort[n + 1];
    for(int i = 0; i < n; i++) {
        cin >> e[i];
        esort[i] = e[i];
    }
    sort(esort, esort + n);
    int ecounter = 0, bcounter = 0;
    for(int i = 1; i <= 2 * n; i++) {
        if(esort[ecounter] == i) ecounter++;
        else {
            b[bcounter] = i;
            bcounter++;
        }
    }
    sort(e, e + n / 2, comp);
    sort(b, b + n, comp);
    bcounter = 0;
    int ans = 0;
    for(int i = 0; i < n / 2; i++) { // first half of the game, elsie's cards index
        if(e[i] < b[bcounter]) {
            ans++;
            b[bcounter] = 1000000000;
            bcounter++;
        }
    }
    sort(e + n / 2, e + n);
    sort(b, b + n);
    bcounter = 0;
    for(int i = n / 2; i < n; i++) { // first half of the game, elsie's cards index
        if(e[i] > b[bcounter]) {
            ans++;
            bcounter++;
        }
    }
    cout << ans << endl;
}
// bessie should use her maximum cards for the first half. both bessie and
// elsie's cards should be in decreasing order.
*/
