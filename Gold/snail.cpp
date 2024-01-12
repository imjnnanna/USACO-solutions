/*
#include <iostream>
using namespace std;
int n, b, output = 1;
char grid[125][125];
bool vis[125][125];
bool legal(int x, int y){
    return (x > 0 && y > 0 && x <= n && y <= n && !vis[x][y] && grid[x][y] == '.');
}
void dfs(int x, int y, int count, bool isLast){
    if(count > output) output = count;
    if(isLast){
        return;
    }
    int temp;
    if(legal(x + 1, y)){ // down
        temp = x;
        while(legal(++temp, y));
        for(int i = x + 1; i < temp; i++){
            vis[i][y] = true;
            count++;
        }
        dfs(temp - 1, y, count, vis[temp][y]);
        for(int i = x + 1; i < temp; i++){
            vis[i][y] = false;
            count--;
        }
    }
    if(legal(x - 1, y)){ // up
        temp = x;
        while(legal(--temp, y));
        for(int i = x - 1; i > temp; i--){
            vis[i][y] = true;
            count++;
        }
        dfs(temp + 1, y, count, vis[temp][y]);
        for(int i = x - 1; i > temp; i--){
            vis[i][y] = false;
            count--;
        }
    }
    if(legal(x, y + 1)){ // right
        temp = y;
        while(legal(x, ++temp));
        for(int i = y + 1; i < temp; i++){
            vis[x][i] = true;
            count++;
        }
        dfs(x, temp - 1, count, vis[x][temp]);
        for(int i = y + 1; i < temp; i++){
            vis[x][i] = false;
            count--;
        }
    }
    if(legal(x, y - 1)){ // left
        temp = y;
        while(legal(x, --temp));
        for(int i = y - 1; i > temp; i--){
            vis[x][i] = true;
            count++;
        }
        dfs(x, temp + 1, count, vis[x][temp]);
        for(int i = y - 1; i > temp; i--){
            vis[x][i] = false;
            count--;
        }
    }
}
int main() {
    cin >> n >> b;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            grid[i][j] = '.';
    for(int i = 0; i < b; i++){
        string temp;
        cin >> temp;
        int c = (int)temp[0] - 'A' + 1;
        int r = 0;
        for(int j = 1; j < temp.length(); j++)
            r = r * 10 + (int)temp[j] - '0';
        grid[r][c] = '#';
    }
    vis[1][1] = true;
    dfs(1, 1, 1, false);
    cout << output << endl;
}
*/
