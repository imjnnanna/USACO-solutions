/*
#include <iostream>
using namespace std;
bool friends[1005][1005]; // friends[i][j] = cow i knows cow j
int n, m, q;
int main() {
    cin >> n >> m >> q;
    int a, b;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        friends[a][b] = true;
        friends[b][a] = true;
    }
    for(int k = 1; k <= n; k++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                friends[i][j] = max(friends[i][j], friends[i][k] && friends[k][j]);
            }
        }
    }
    for(int i = 0; i < q; i++) {
        cin >> a >> b;
        if(friends[a][b] == true) cout << "Y" << endl;
        else cout << "N" << endl;
    }
}
*/
