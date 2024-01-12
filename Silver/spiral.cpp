/*
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int mat[n][n];
    int arrside = n, count1 = 1, count2 = 0;
    while(count1 <= n * n) {
        for(int i = count2; i < arrside; i++) mat[count2][i] = count1++;
        for(int i = count2 + 1; i < arrside; i++) mat[i][arrside - 1] = count1++;
        for(int i = arrside - 2; i >= count2; i--) mat[arrside - 1][i] = count1++;
        for(int i = arrside - 2; i > count2; i--) mat[i][count2] = count1++;
        count2++;
        arrside--;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
*/
