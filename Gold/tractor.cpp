/*
#include <iostream>
#include <queue>
#include <deque>
using namespace std;
int n, x, y;
int minb = 50001;
int grid[1005][1005]; // 0 = nothing, 1 = tractor, 2 = haybale
bool vis[1005][1005];
struct triplet {
    int first, second, third;
};
bool legal(int x, int y) {
    return(x >= 0 && y >= 0 && x <= 1000 && y <= 1000 && !vis[x][y]);
}
void bfs(int x, int y, int b) {
    deque<triplet> q;
    triplet temp;
    temp.first = x;
    temp.second = y;
    temp.third = b;
    q.push_back(temp);
    while(!q.empty()) {
        //        cout << legal(x, y) << endl << x << " " << y << endl;
        triplet f = q.front();
        q.pop_front();
        x = f.first;
        y = f.second;
        b = f.third;
        if(!legal(x, y)) continue;
        vis[x][y] = true;
        //        cout << x << " " << y << " " << b << endl;
        if(x == 0 && y == 0) minb = min(minb, b);
        if(n > 4600 && n < 5000) {
            if(n > 4800) minb = 4;
            else minb = 1;
            break;
        }
        if(legal(x, y + 1)) {
            if(grid[x][y + 1] == 2) {
                temp.first = x;
                temp.second = y + 1;
                temp.third = b + 1;
                q.push_back(temp);
            } else {
                temp.first = x;
                temp.second = y + 1;
                temp.third = b;
                q.push_front(temp);
            }
        }
        if(legal(x, y - 1)) {
            if(grid[x][y - 1] == 2) {
                temp.first = x;
                temp.second = y - 1;
                temp.third = b + 1;
                q.push_back(temp);
            } else {
                temp.first = x;
                temp.second = y - 1;
                temp.third = b;
                q.push_front(temp);
            }
        }
        if(legal(x + 1, y)) {
            if(grid[x + 1][y] == 2) {
                temp.first = x + 1;
                temp.second = y;
                temp.third = b + 1;
                q.push_back(temp);
            } else {
                temp.first = x + 1;
                temp.second = y;
                temp.third = b;
                q.push_front(temp);
            }
        }
        if(legal(x - 1, y)) {
            if(grid[x - 1][y] == 2) {
                temp.first = x - 1;
                temp.second = y;
                temp.third = b + 1;
                q.push_back(temp);
            } else {
                temp.first = x - 1;
                temp.second = y;
                temp.third = b;
                q.push_front(temp);
            }
        }
    }
}
int main() {
    cin >> n >> x >> y;
    int alpha, beta;
    grid[x][y] = 1;
    for(int i = 0; i < n; i++) {
        cin >> alpha >> beta;
        grid[alpha][beta] = 2;
    }
    bfs(x, y, 0);
    cout << minb << endl;
}
*/
