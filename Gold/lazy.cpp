/*
#include <iostream>
using namespace std;
int n, k, grid[801][801], ans;
int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> grid[i + j][n - i + j - 1];
    }
    int t = (n + 1) % 2;
    n = n * 2 - 1;
    for (int i = 0; i < n; i++, t = 1 - t) {
        int sum = 0;
        for (int a = max(i - k,0); a < n && a <= i + k; a++) {
            for (int b = max(t - k,0); b < n && b <= t + k; b++) {
                sum += grid[a][b];
            }
        }
        ans = max(ans, sum);
        for (int j = t + 1; j + k < n; j++) {
            for (int a = max(i - k, 0); a < n && a <= i + k; a++) {
                if (j - k - 1 >= 0) sum -= grid[a][j - k - 1];
                sum += grid[a][j + k];
            }
            if (j % 2 == t) ans = max(ans, sum); // if possible point, update
        }
    }
    cout << ans << endl;
}
*/
/*
#include <iostream>
#include <queue>
using namespace std;
int n, k, grid[405][405];
bool legal(int r, int c) {
    return r >= 0 && r < n && c >= 0 && c < n;
}
int bfs(int startr, int startc) {
    queue<pair<pair<int, int>, int>> q;
    bool vis[n + 5][n + 5];
    for(int i = 0; i < n + 5; i++) {
        for(int j = 0; j < n + 5; j++) vis[i][j] = false;
    }
    int ans = 0;
    q.push(make_pair(make_pair(startr, startc), 0));
    pair<pair<int, int>, int> f;
    int i, j, t;
    while(!q.empty()) {
        f = q.front();
        q.pop();
        i = f.first.first;
        j = f.first.second;
        t = f.second;
        if(t > k || !legal(i, j) || vis[i][j]) continue;
        ans += grid[i][j];
        if(!vis[i + 1][j]) q.push(make_pair(make_pair(i + 1, j), t + 1));
        if(!vis[i - 1][j]) q.push(make_pair(make_pair(i - 1, j), t + 1));
        if(!vis[i][j + 1]) q.push(make_pair(make_pair(i, j + 1), t + 1));
        if(!vis[i][j - 1]) q.push(make_pair(make_pair(i, j - 1), t + 1));
        vis[i][j] = true;
    }
    return ans;
}
int main() {
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) cin >> grid[i][j];
    }
    int ans = -1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) ans = max(ans, bfs(i, j));
    }
    cout << ans << endl;
}
*/
