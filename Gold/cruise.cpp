/*
#include <iostream>
#include <vector>
using namespace std;
int n, m, k;
int l[1005], r[1005];
char direct[505];
int vis[1005];
vector<int> ports;
int endport() {
    int ind = 0, port = 1;
    while(vis[port] == 0) { // break if there is a cycle
        vis[port] = ind;
        ports.push_back(port);
        for(int i = 1; i <= m; i++) {
            if(direct[i] == 'L') port = l[port]; // turn left
            else port = r[port]; // turn right
        }
        ind++;
    }
    return ports[vis[port] + (k - 2 * vis[port] + ind) % (ind - vis[port])] ;
}
int main() {
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i++) cin >> l[i] >> r[i];
    for(int i = 1; i <= m; i++) cin >> direct[i];
    cout << endport() << endl;
}
*/
