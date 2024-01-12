/*
#include <iostream>
#include <string>
using namespace std;
int grid[153][153];
int in[55], out[55];
string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
int lettertonumber(char letter) {
    int number;
    for (number = 0; number < 52; number++) {
        if (letter == letters[number]) break;
    }
    return number + 1;
}
int main() {
    int n;
    cin >> n;
    char st, en;
    int c;
    for(int i = 1; i <= n; i++) { // grid[i][j] = i goes into j
        cin >> st >> en >> c;
        int start = lettertonumber(st);
        int end = lettertonumber(en);
        if (grid[start][end] == 0) {
            in[start]++; // in[start] has an outgoing edge
            out[end]++; // out[end] has an ingoing edge
        }
        grid[start][end] += c; // going in
        //        grid[end][start] += c; // going out
        
    }
    for(int asd = 0; asd < 52; asd++) {
        for(int i = 52; i >= 1; i--) {
            if(in[i] == 0 && i != 26) { // if no outgoing edges at in[i]
                for(int j = 1; j <= 52; j++) {
                    if(grid[j][i] != 0) {
                        grid[j][i] = 0; // delete entire row
                        out[i]--;
                        in[j]--;
                    }
                }
            }
        }
    }
    for(int asd = 0; asd < 1000; asd++) {
        for(int k = 1; k <= 52; k++) {
            for(int i = 1; i <= 52; i++) {
                for(int j = 1; j <= 52; j++) {
                    if(grid[i][k] > 0 && grid[k][j] > 0 && out[k] == 1 && in[k] == 1) {
                        if(grid[i][j] > 0) {
                            out[j]--;
                            in[i]--;
                        }
                        grid[i][j] += min(grid[i][k], grid[k][j]); // floyd-warshall to combine last of pipes
                        grid[i][k] = grid[k][j] = 0;
                        in[k]--;
                        out[k]--;
                    }
                }
            }
        }
    }
    cout << grid[1][26] << endl;
}
*/
