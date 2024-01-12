/*
#include <iostream>
#include <set>
using namespace std;
int n, m, t;
bool xys[1000005];
int coord[1000005];
int main() {
    cin >> m >> n;
    if(n < m) n = m;
    int at = 1;
    for(int i = 1; i < n / 2; i++) { // x = y + i
        while (xys[at] && at + i < n) {
            at++;
        }
        if (at + i >= n) {
            break;
        }
        coord[at] = at + i;
        coord[at + i] = at;
        xys[at + i] = true;
        xys[at] = true;
    }
    cin >> t;
    int x, y;
    for(int i = 0; i < t; i++) {
        cin >> x >> y;
        if((x == 0 && y != 0) || (x != 0 && y == 0)) cout << "Bessie" << endl;
        else if(coord[x] == y) cout << "Farmer John" << endl;
        else cout << "Bessie" << endl;
    }
}
*/
