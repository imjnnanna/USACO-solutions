/*
#include <iostream>
#include <cmath>
using namespace std;
int field[1000][1000];
int first[1000], second[1000];
int max3(int a, int b, int c) {
    return max(a, max(b, c));
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> first[i];
    for (int i = 0; i < n; i++) cin >> second[i];
    if(abs(first[0] - second[0]) <= 4) field[0][0] = 1;
    else field[0][0] = 0;
    for (int i = 1; i < n; i++) {
        if(abs(first[i] - second[0]) <= 4) field[i][0] = 1;
        else field[i][0] = 0;
        if(abs(first[0] - second[i]) <= 4) field[0][i] = 1;
        else field[0][i] = 0;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if(abs(first[i] - second[j]) <= 4) field[i][j] = max3(field[i - 1][j], field[i][j - 1], field[i - 1][j - 1] + 1);
            else field[i][j] = max3(field[i - 1][j], field[i][j - 1], field[i - 1][j - 1]);
        }
    }
    cout << field[n - 1][n - 1] << endl;
}
*/
