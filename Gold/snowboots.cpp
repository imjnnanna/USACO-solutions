/*
#include <iostream>
#include <algorithm>
using namespace std;
int nextind[100005], prevind[100005];
bool ans[100005];
pair<int, int> tiles[100005]; // depth, index
struct shoe {
    int depth, step, ind;
} boots[100005];
bool comp(pair<int, int> a, pair<int, int> b) {
    return a.first > b.first;
}
bool comp2(shoe a, shoe b) {
    return a.depth > b.depth;
}
int main() {
    int n, b;
    cin >> n >> b;
    for(int i = 0; i < n; i++) {
        cin >> tiles[i].first;
        tiles[i].second = i;
    }
    for(int i = 0; i < b; i++) {
        cin >> boots[i].depth >> boots[i].step;
        boots[i].ind = i;
    }
    sort(tiles, tiles + n, comp);
    sort(boots, boots + b, comp2);
    for(int i = 0; i < n; i++) { // normal = 0, 1, 2, 3 ... n - 1
        nextind[i] = i + 1; // 1, 2, 3, 4 ... n
        prevind[i] = i - 1; // -1, 0, 1, 2 ... n - 2
    }
    int nostep = 1;
    int tilecount = 0;
    for(int i = 0; i < b; i++) {
        while(tilecount < n && tiles[tilecount].first > boots[i].depth) {
            int currentind = tiles[tilecount].second;
            nextind[prevind[currentind]] = nextind[currentind];
            prevind[nextind[currentind]] = prevind[currentind];
            nostep = max(nostep, nextind[currentind] - prevind[currentind]);
            tilecount++;
        }
        ans[boots[i].ind] = (boots[i].step >= nostep);
    }
    for(int i = 0; i < b; i++) cout << ans[i] << endl;
}
 */
// Brute force lmao
/*
#include <iostream>
using namespace std;
int n, b, tile[100005];
pair<int, int> boot[100005]; // first = maximum depth of snow, second = maximum step size
bool possible(int ind) {
    int depth = boot[ind].first, step = boot[ind].second;
    int current = 0, next = 0;
    while(true) {
        if(current + step < n) {
            for(next = current + step; next >= current; next--) if(tile[next] <= depth) break;
        } else {
            for(next = n - 1; next >= current; next--) if(tile[next] <= depth) break;
        }
        // next is the index of the best step FJ can take.
        if(next == current) return false; // if can't take a step
        if(next == n - 1) return true;
        current = next;
    }
    return true;
}
int main() {
    cin >> n >> b;
    for(int i = 0; i < n; i++) cin >> tile[i];
    for(int i = 0; i < b; i++) cin >> boot[i].first >> boot[i].second;
    for(int i = 0; i < b; i++) cout << possible(i) << endl;
}
*/
