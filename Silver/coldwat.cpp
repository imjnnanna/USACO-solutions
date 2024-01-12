/*
#include <iostream>
using namespace std;
int n, c, e;
int l[100005], r[100005], dist[100005];
void dfs (int pipe) {
    if(l[pipe] != 0 && dist[l[pipe]] == 0) {
        dist[l[pipe]] = dist[pipe] + 1;
        dfs (l[pipe]);
    }
    if(r[pipe] != 0 && dist[r[pipe]] == 0) {
        dist[r[pipe]] = dist[pipe] + 1;
        dfs (r[pipe]);
    }
}
int main() {
    cin >> n >> c;
    for (int i = 0; i < c; i++){
        cin >> e;
        cin >> l[e] >> r[e];
    }
    dist[1] = 1;
    dfs (1);
    for (int i = 1; i <= n; i++) {
        cout << dist[i] << endl;
    }
}
*/
