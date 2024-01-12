/*
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
long long grid[2005][2005], arr[4004005];
long long len = 0;
bool vis[4004005];
int a, b, n, m, disti[2005], distj[2005], temp[2005];
priority_queue<pair<int, int>> edge;
long long mst() {
    for(int i = 0; i < (n + 1) * (m + 1); i++) arr[i] = 1000000000000000;
    arr[0] = 0;
    edge.push(make_pair(0, 0));
    while(!edge.empty()) {
        pair<int, int> f = edge.top();
        edge.pop();
        vis[f.second] = true;
        int xi = f.second / (n + 1), xj = f.second % (n + 1), x = f.second;
        if(x % (n + 1) != n && !vis[x + 1] && arr[x + 1] > distj[xi]) {
            arr[x + 1] = distj[xi];
            edge.push(make_pair(-arr[x + 1], x + 1));
        }
        if(x % (n + 1) != 0 && !vis[x - 1] && arr[x - 1] > distj[xi]) {
            arr[x - 1] = distj[xi];
            edge.push(make_pair(-arr[x - 1], x - 1));
        }
        if(x / (n + 1) < m && !vis[x + n + 1] && arr[x + n + 1] > disti[xj]) {
            arr[x + n + 1] = disti[xj];
            edge.push(make_pair(-arr[x + n + 1], x + n + 1));
        }
        if(x > n && !vis[x - n - 1] && arr[x - n - 1] > disti[xj]) {
            arr[x - n - 1] = disti[xj];
            edge.push(make_pair(-arr[x - n - 1], x - n - 1));
        }
    }
    for(int i = 0; i < (n + 1) * (m + 1); i++) len += arr[i];
    return len;
}
int main() {
    cin >> a >> b >> n >> m;
    for(int i = 1; i <= n; i++) cin >> temp[i];
    sort(temp + 1, temp + n + 1);
    disti[n] = a - temp[n];
    for(int i = 0; i < n; i++) disti[i] = temp[i + 1] - temp[i];
    
    for(int i = 1; i <= m; i++) cin >> temp[i];
    sort(temp + 1, temp + m + 1);
    distj[m] = b - temp[m];
    for(int i = 0; i < m; i++) distj[i] = temp[i + 1] - temp[i];
    
    int count = 0;
    for(int i = 0; i <= m; i++) {
        for(int j = 0; j <= n; j++) {
            grid[i][j] = count;
            count++;
        }
    }
    cout << mst() << endl;
}
*/
