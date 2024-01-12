/*
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n, m, ingoing1[5005], forwards[5005], backwards[5005], ingoing2[5005];
bool start1[5005], start2[5005];
vector<int> outgoing1[5005], outgoing2[5005];
queue<int> q;
pair<int, int> edge[50005];
int main() {
    cin >> n >> m;
    int a, b;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        edge[i] = make_pair(a, b);
        outgoing1[a].push_back(b);
        outgoing2[b].push_back(a);
        ingoing1[b]++;
        ingoing2[a]++;
    }
    int source1 = 0;
    for(int i = 1; i <= n; i++) {
        if(ingoing1[i] == 0) {
            forwards[i] = 1;
            source1++;
            q.push(i);
            start1[i] = true;
        }
    }
    int node;
    while(!q.empty()) {
        node = q.front();
        for(int i = 0; i < outgoing1[node].size(); i++) { // i = going through all outgoing1 edges
            ingoing1[outgoing1[node][i]]--;
            if(ingoing1[outgoing1[node][i]] == 0) q.push(outgoing1[node][i]);
            forwards[outgoing1[node][i]] += forwards[node];
        }
        q.pop();
    }
    int source2 = 0;
    for(int i = 1; i <= n; i++) {
        if(ingoing2[i] == 0) {
            backwards[i] = 1;
            source2++;
            q.push(i);
            start2[i] = true;
        }
    }
    while(!q.empty()) {
        node = q.front();
        for(int i = 0; i < outgoing2[node].size(); i++) { // i = going through all outgoing2 edges
            ingoing2[outgoing2[node][i]]--;
            if(ingoing2[outgoing2[node][i]] == 0) q.push(outgoing2[node][i]);
            backwards[outgoing2[node][i]] += backwards[node];
        }
        q.pop();
    }
    int ans = 0;
    for(int i = 0; i < m; i++) {
        ans = max(ans, forwards[edge[i].first] * backwards[edge[i].second]);
    }
    cout << ans << endl;
}
*/
