/*
#include <iostream>
using namespace std;
int mat[105][105];
int n;
int f() {
    for(int i = n - 2; i >= 0; i--) {
        for(int j = 0; j <= i; j++) {
            mat[i][j] = mat[i][j] + max(mat[i + 1][j], mat[i + 1][j + 1]);
        }
    }
    return mat[0][0];
}
int main() {
    cin >> n;
    int count = 0;
    for(int i = 0; i < n; i++) {
        count++;
        for(int j = 0; j < count; j++) {
            cin >> mat[i][j];
        }
    }
    cout << f() << endl;
}
*/
