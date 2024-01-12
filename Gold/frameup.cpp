/*
#include <iostream>
using namespace std;
char grid[37][37], arr[37];
bool vis[37], edge[37][37];
int above[37], numofletters = 0;
struct minmaxcoord {
    int left, right, up, down;
} frame[37];
void dfs(int ind) {
    if(ind == numofletters) {
        for(int i = 0; i < numofletters; i++) cout << arr[i];
        cout << endl;
        return;
    }
    for(int i = 0; i <= 36; i++) {
        if(!vis[i] || above[i] > 0) continue;
        vis[i] = false;
        arr[ind] = 'A' + i;
        for(int j = 0; j <= 36; j++) {
            if(edge[i][j]) above[j]--;
        }
        dfs(ind + 1);
        vis[i] = true;
        for(int j = 0; j <= 36; j++) {
            if(edge[i][j]) above[j]++;
        }
    }
}
int main() {
    int h, w;
    cin >> h >> w;
    for(int i = 0; i <= 36; i++) {
        frame[i].left = frame[i].up = 1000000000;
    }
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> grid[i][j];
            if(grid[i][j] == '.') continue;
            int letter = grid[i][j] - 'A';
            vis[letter] = true;
            frame[letter].left = min(frame[letter].left, j);
            frame[letter].right = max(frame[letter].right, j);
            frame[letter].up = min(frame[letter].up, i);
            frame[letter].down = max(frame[letter].down, i);
        }
    }
    for(int i = 0; i <= 36; i++) {
        if(!vis[i]) continue;
        numofletters++;
        for(int j = frame[i].left; j <= frame[i].right; j++) { // create edges if frames overlap
            if(grid[frame[i].up][j] != '.' && grid[frame[i].up][j] - 'A' != i) edge[i][grid[frame[i].up][j] - 'A'] = true;
            if(grid[frame[i].down][j] != '.' && grid[frame[i].down][j] - 'A' != i) edge[i][grid[frame[i].down][j] - 'A'] = true;
        }
        for(int j = frame[i].up; j <= frame[i].down; j++) {
            if(grid[j][frame[i].left] != '.' && grid[j][frame[i].left] - 'A' != i) edge[i][grid[j][frame[i].left] - 'A'] = true;
            if(grid[j][frame[i].right] != '.' && grid[j][frame[i].right] - 'A' != i) edge[i][grid[j][frame[i].right] - 'A'] = true;
        }
    }
    for(int i = 0; i <= 36; i++) {
        for(int j = 0; j <= 36; j++) { // if i to j edge exists, j is above i
            if(edge[i][j] && i != j) above[j]++;
        }
    }
    dfs(0);
}
*/
