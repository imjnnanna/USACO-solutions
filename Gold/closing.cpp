/*
#include <iostream>
#include <vector>
using namespace std;
int n, m, chinese[200005], root[200005], groupsize[200005];
vector<int> grid[200005];
bool isopen[200005], result[200005];
int findroot(int node) {
    if(root[node] == node) return node;
    int a = findroot(root[node]);
    root[node] = a;
    return a;
}
int main() {
    cin >> n >> m;
    int a, b;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        grid[a].push_back(b);
        grid[b].push_back(a);
    }
    for(int i = 1; i <= n; i++) {
        cin >> chinese[i];
        groupsize[i] = 1;
        root[i] = i;
    }
    for(int food = n; food >= 1; food--) {
        isopen[chinese[food]] = true;
        int ans = 0;
        for(auto i: grid[chinese[food]]) {
            if(!isopen[i]) continue;
            int a = findroot(i);
            int b = findroot(chinese[food]);
            if(a == b) continue;
            if(groupsize[a] < groupsize[b]) {
                groupsize[b] += groupsize[a];
                ans = max(ans, groupsize[b]);
                groupsize[a] = 0;
                root[a] = root[b];
            } else {
                groupsize[a] += groupsize[b];
                ans = max(ans, groupsize[a]);
                groupsize[b] = 0;
                root[b] = root[a];
            }
        }
        if(ans == n - food + 1) result[food] = true;
        else result[food] = false;
    }
    for(int i = 1; i <= n; i++) {
        if(result[i] || i == n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
*/
