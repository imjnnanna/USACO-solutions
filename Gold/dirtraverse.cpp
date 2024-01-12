/*
#include <cstdio>
#include <cassert>
#include <cstring>
#include <vector>
#include <iostream>
using namespace std;
struct node {
    bool isFile;
    vector<node*> children;
    int namelen;
    int numLeaves;
    long long totalSubtreeLen;
    long long total;
} nodes[100000];
int n;
int nleaves;
void dfs1(node* x) {
    x->numLeaves = x->isFile;
    x->totalSubtreeLen = 0;
    for (node* child : x->children) {
        dfs1(child);
        x->numLeaves += child->numLeaves;
        x->totalSubtreeLen += child->totalSubtreeLen + child->numLeaves * (child->namelen + (child->isFile ? 0 : 1));
    }
}
void dfs2(node* x, long long parentlen) {
    x->total = parentlen + x->totalSubtreeLen;
    long long plenadd = 0;
    for (node* child : x->children) plenadd += child->totalSubtreeLen + child->numLeaves * (child->namelen + 1 - child->isFile);
    for (node* child : x->children) {
        dfs2(child, parentlen + plenadd - (child->totalSubtreeLen + child->numLeaves * (child->namelen + 1 - child->isFile)) + 3 * (nleaves - child->numLeaves));
    }
}
int main() {
    cin >> n;
    string name;
    nleaves = 0;
    for (int i = 0; i < n; i++) {
        cin >> name;
        nodes[i].namelen = name.length();
        int numChildren;
        cin >> numChildren;
        if(numChildren == 0) {
            nodes[i].isFile = true;
            nleaves++;
        } else nodes[i].isFile = false;
        for (int j = 0; j < numChildren; j++) {
            int id;
            cin >> id;
            nodes[i].children.push_back(&nodes[id - 1]);
        }
    }
    dfs1(&nodes[0]);
    dfs2(&nodes[0], 0);
    long long ans = 1000000000000000000;
    for (int i = 0; i < n; i++) {
        if(!nodes[i].isFile) ans = min(ans, nodes[i].total);
    }
    cout << ans << endl;
}
*/
