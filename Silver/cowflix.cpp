/*
#include <iostream>
using namespace std;
int weights[17];
int c, n, best = 0;
void gen(int sum, int ind) {
    if(ind >= n) {
        if(sum <= c && sum > best) {
            best = sum;
        }
        return;
    }
    gen(sum + weights[ind], ind + 1);
    gen(sum, ind + 1);
}
int main() {
    int w;
    cin >> c >> n;
    for(int i = 0; i < n; i++) {
        cin >> w;
        weights[i] = w;
    }
    gen(0, 0);
    cout << best << endl;
}
*/
