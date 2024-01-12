// INDEGREES store (how many pipes are going into that node)
// then if indegree is 0, add to queue
// look at each node in the queue, SIMULATE removing that node by
// decreasing it's parent's node's indegree by 1
// Keep doing that until you can add the parent node to the queue
// because its indegree will become 0
// then finally u will have a complete queue, this is top sort
// if there's only one milk source in the queue while doing top sort,
// that should be part of the main pipe source
/*
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n, ingoing[100005], milk[100005];
bool start[100005];
vector<int> outgoing[100005];
queue<int> q;
int main() {
    cin >> n;
    int a, b;
    for(int i = 0; i < n - 1; i++) {
        cin >> a >> b;
        outgoing[a].push_back(b);
        ingoing[b]++;
    }
    int source = 0;
    for(int i = 1; i <= n; i++) {
        if(ingoing[i] == 0) {
            milk[i] = 1;
            source++;
            q.push(i);
            start[i] = true;
        }
    }
    int node;
    while(!q.empty()) {
        node = q.front();
        if(milk[node] >= source && !start[node]) {
            cout << node << endl;
            if(outgoing[node].size() != 1) break;
        }
        for(int i = 0; i < outgoing[node].size(); i++) { // i = going through all outgoing edges
            ingoing[outgoing[node][i]]--;
            if(ingoing[outgoing[node][i]] == 0) q.push(outgoing[node][i]);
            milk[outgoing[node][i]] += milk[node];
        }
        q.pop();
    }
}
*/
