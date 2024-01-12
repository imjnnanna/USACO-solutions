/*
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> trail[100005];
bool vis[100005];
queue<int> q;
long long ans = 1;
int n, m;
int main() {
    cin >> n >> m;
    int a, b;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        trail[a].push_back(b);
        trail[b].push_back(a);
    }
    while(true) {
        int start = -1;
        for(int i = 1; i <= n; i++) {
            if(!vis[i]) {
                start = i;
                break;
            }
        }
        if(start == -1) break;
        q.push(start);
        vis[start] = true;
        int node = 1, edge = 0;
        while(!q.empty()) {
            a = q.front();
            q.pop();
            edge += trail[a].size();
            for(int i = 0; i < trail[a].size(); i++) {
                if(!vis[trail[a][i]]) {
                    vis[trail[a][i]] = true;
                    node++;
                    q.push(trail[a][i]);
                }
            }
        }
        edge /= 2;
        if(node == edge) ans *= 2;
        else ans *= node;
        ans %= 1000000007;
    }
    cout << ans << endl;
}
*/

