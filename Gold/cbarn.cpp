/*
 1. (5) treasure chest - sliding window, we already did it so the algorithm doesn't matter
 2. (4) lazy cow - sliding window
 3. (1) circular barn - simulation/greedy
 4. (2) cow traveling - bfs/dfs
 5. (7) directory traversal - 2 dfs's
 6. (3) fuel economy - greedy/simulation
 7. (6) time management - binary search + simulation/greedy
 */
/*
#include <iostream>
#include <queue>
using namespace std;
int n, barn[200005];
queue<int> leftover;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> barn[i];
    for(int i = n; i < 2 * n; i++) barn[i] = barn[i - n];
    int start = 0;
    for(start = 0; start < n; start++) {
        int count = 0;
        bool possible = true;
        for(int i = start; i < n + start; i++) {
            if(barn[i] == 0) count--;
            else count += barn[i] - 1;
            if(count < 0) {
                possible = false;
                break;
            }
        }
        if(possible) break;
    }
    long long ans = 0;
    for(int i = start; i < n + start; i++) {
        for(int j = 0; j < barn[i]; j++) leftover.push(i);
        barn[i] = 0;
        ans += (i - leftover.front()) * (i - leftover.front());
        leftover.pop();
    }
    cout << ans << endl;
}
*/
