/*
#include <iostream>
using namespace std;
struct block {
    bool n, e, w, s;
    int steps;
};
block maze[100][40];
char cmaze[201][81];
int W, H;
void flood(int i, int j, int count){
    if(maze[i][j].steps > count) {
        maze[i][j].steps = count;
        if(!maze[i][j].n) flood(i - 1, j, count + 1);
        if(!maze[i][j].s) flood(i + 1, j, count + 1);
        if(!maze[i][j].w) flood(i, j - 1, count + 1);
        if(!maze[i][j].e) flood(i, j + 1, count + 1);
    }
}
int main(){
    cin >> W >> H;
    for (int i = 0; i < 2 * H + 1; i += 1){
        for(int j = 0; j < 2 * W + 1; j++){
            cin >> cmaze[i][j];
        }
    }
    for(int i = 0; i < H; i ++){
        for(int j = 0; j < W; j ++){
            maze[i][j].n = cmaze[i * 2][j * 2 + 1] == '-';
            maze[i][j].s = cmaze[i * 2 + 2][j * 2 + 1] == '-';
            maze[i][j].w = cmaze[i * 2 + 1][j * 2] == '|';
            maze[i][j].e = cmaze[i * 2 + 1][j * 2 + 2] == '|';
            maze[i][j].steps = 1000000000;
        }
    }
    //TOP EDGE
    for(int i = 0; i < W; i++){
        if(!maze[0][i].n) flood(0, i, 1);
    }
    //BOTTOM EDGE
    for(int i = 0; i < W; i++){
        if(!maze[H - 1][i].s) flood(H - 1, i, 1);
    }
    //LEFT EDGE
    for(int i = 0; i < H; i++){
        if(!maze[i][0].w) flood(i, 0, 1);
    }
    //RIGHT EDGE
    for(int i = 0; i < H; i++){
        if(!maze[i][W - 1].e) flood(i, W - 1, 1);
    }
    int minsteps = 0;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            minsteps = max(minsteps, maze[i][j].steps);
        }
    }
    cout << minsteps << endl;
}
*/
