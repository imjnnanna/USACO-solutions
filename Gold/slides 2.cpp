/*
#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
struct platform {
    int location, index, in, out;
} node[10005];
bool comp(platform a, platform b) {
    return a.location < b.location;
}
int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        cin >> node[i].location;
        node[i].index = i;
    }
    int a, b;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        node[a].out++;
        node[b].in++;
    }
    sort(node + 1, node + n + 1, comp);
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        a = min(node[i].in, node[i].out);
        node[i].in -= a;
        node[i].out -= a;
    }
    for(int i = 1; i <= n; i++) {
        if(node[i].in != 0) {
            for(int j = i; j <= n; j++) {
                if(node[j].out == 0) continue;
                a = min(node[i].in, node[j].out);
                ans += a * (node[j].location - node[i].location);
                node[i].in -= a;
                node[j].out -= a;
                if(node[i].in == 0) break;
            }
        } else if(node[i].out != 0) {
            for(int j = i; j <= n; j++) {
                if(node[j].in == 0) continue;
                a = min(node[i].out, node[j].in);
                ans += a * (node[j].location - node[i].location);
                node[i].out -= a;
                node[j].in -= a;
                if(node[i].out == 0) break;
            }
        }
    }
    cout << ans << endl;
}
*/
