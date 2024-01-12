/*
#include <iostream>
#include <queue>
#include <set>
using namespace std;
int n, d;
queue<int> q; // index of termination
int bpie[200005], epie[200005], arr[200005];
set<pair<int, int>> bessie, elsie; // .first = other cow's tastiness, index of pie.
set<pair<int, int>>::iterator it;
// bessie's set stores pies that she can receive (elsie's pies), and vice versa for elsie.
void bfs() {
    int currentind;
    while(!q.empty()) {
        int f = q.front();
        q.pop();
        if(f < n) { // elsie receives bessie's pie
            it = elsie.lower_bound({bpie[f] - d, -1000000000}); // because we're bfs'ing backwards... search for something lower
            // update all it's neighbors
            while(true) {
                currentind = it -> second; // index of pie
                if(it == elsie.end() || bpie[currentind] > bpie[f]) break; // if reached the end, or if not as tasty
                arr[currentind] = arr[f] + 1; // add one more pie
                q.push(currentind);
                it = elsie.erase(it); // update 'it'
            }
        } else { // bessie receives elsie's pie, all opposite to above
            // search for a pie in bessie's set that elsie thinks that it is at least tastier but not more than d tastier than what she received
            it = bessie.lower_bound({epie[f] - d, -1000000000}); // because we're bfs'ing backwards... search for something lower
            // update all it's neighbors
            while(true) {
                currentind = it -> second; // index of pie
                if(it == bessie.end() || epie[currentind] > epie[f]) break; // if reached the end, or if not as tasty
                arr[currentind] = arr[f] + 1; // add one more pie
                q.push(currentind);
                it = bessie.erase(it); // update 'it'
            }
        }
    }
}
int main() {
    cin >> n >> d;
    for(int i = 0; i < 2 * n; i++) cin >> bpie[i] >> epie[i];
    for(int i = 0; i < n; i++) { // bessie's pies
        if(epie[i] == 0) { // if elsie thinks that it's tastiness is 0
            arr[i] = 1; // if started at that index, the answer is 1
            q.push(i); // add to queue
        } else {
            arr[i] = 1000000000; // set to INF
            bessie.insert(make_pair(epie[i], i));
        }
    }
    for(int i = n; i < 2 * n; i++) { // elsie's pies
        if (bpie[i] == 0) {
            arr[i] = 1;
            q.push(i);
        } else {
            arr[i] = 1000000000;
            elsie.insert(make_pair(bpie[i], i));
        }
    }
    bfs();
    for(int i = 0; i < n; i++) { // queries
        if (arr[i] < 1000000000) cout << arr[i] << endl;
        else cout << -1 << endl;
    }
}
*/
