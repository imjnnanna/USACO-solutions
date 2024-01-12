/*
#include <iostream>
using namespace std;
int n, hay[21], best = 1000000000;
void dfs(int barn1, int barn2, int barn3, int ind) {
    if(max(barn1, max(barn2, barn3)) >= best) return;
    if(ind == n) {
        if(max(barn1, max(barn2, barn3)) < best) {
            best = max(barn1, max(barn2, barn3));
        }
        return;
    }
    dfs(barn1 + hay[ind], barn2, barn3, ind + 1);
    dfs(barn1, barn2 + hay[ind], barn3, ind + 1);
    dfs(barn1, barn2, barn3 + hay[ind], ind + 1);
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> hay[i];
    dfs(0, 0, 0, 0);
    cout << best << endl;
}
*/
