/*
#include <iostream>
using namespace std;
int grid[53][53];
int lettertonumber(char letter) {
    char letters[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int number = 0;
    for (int i = 0; i <= 52; i++) {
        if (letter == letters[i]) {
            number = i + 1;
            break;
        }
    }
    return number;
}
char numbertoletter(int number) {
    char letters[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    return letters[number];
}
int main() {
    int p;
    cin >> p;
    for(int i = 0; i < 53; i++) {
        for(int j = 0; j < 53; j++) {
            if(i != j) grid[i][j] = 1000000000;
        }
    }
    char rando;
    int start, end, len;
    for(int i = 0; i < p; i++) {
        cin >> rando;
        start = lettertonumber(rando);
        cin >> rando >> len;
        end = lettertonumber(rando);
        grid[start][end] = min(len, grid[start][end]);
        grid[end][start] = min(len, grid[end][start]);
    }
    for(int k = 1; k < 53; k++) {
        for(int i = 1; i < 53; i++) {
            for(int j = 1; j < 53; j++) {
                grid[i][j] = min(grid[i][j], grid[i][k] + grid[k][j]);
            }
        }
    }
    int mindis = 1000000000;
    int minind = 1;
    for(int i = 27; i < 52; i++) {
        if(mindis > grid[i][52]) {
            mindis = grid[i][52];
            minind = i - 1;
        }
    }
    cout << numbertoletter(minind) << " " << mindis << endl;
}
*/
