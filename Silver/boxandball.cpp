/*
#include <iostream>
using namespace std;
int main() {
    int n, m, x, y;
    cin >> n >> m;
    bool red[n + 5];
    red[1] = true;
    for(int i = 2; i <= n; i++) red[i] = false;
    int count[n + 5];
    for(int i = 1; i <= n; i++) count[i] = 1;
    for (int i = 1; i <= m; i++) {
        cin >> x >> y;
        count[x]--;
        count[y]++;
        if(red[x]) red[y] = true;
        if(count[x] == 0) red[x] = false;
    }
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        if(red[i]) ans++;
    }
    cout << ans << endl;
}
*/
