/*
 ID: imjnnan1
 LANG: C++
 TASK: transform
 */
/*
#include <fstream>
using namespace std;
int n;
bool before[11][11], after[11][11], change[11][11], orig[11][11];
bool same() {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(change[i][j] != after[i][j]) return false;
        }
    }
    return true;
}
bool one() { // 90 degrees
    for(int i = 0; i < n / 2; i++) {
        for(int j = i; j < n - i - 1; j++) {
            change[i][j] = before[n - 1 - j][i];
            change[n - 1 - j][i] = before[n - 1 - i][n - 1 - j];
            change[n - 1 - i][n - 1 - j] = before[j][n - 1 - i];
            change[j][n - 1 - i] = before[i][j];
        }
    }
    return same();
}
bool two() { // 180 degrees
    for(int i = 0, ci = n - 1; i < n; i++, ci--) {
        for(int j = 0, cj = n - 1; j < n; j++, cj--) change[ci][cj] = before[i][j];
    }
    return same();
}
bool three() { // 270 degrees
    for(int i = 0; i < n / 2; i++) {
        for(int j = i; j < n - i - 1; j++) {
            change[i][j] = before[j][n - 1 - i];
            change[j][n - 1 - i] = before[n - 1 - i][n - 1 - j];
            change[n - 1 - i][n - 1 - j] = before[n - 1 - j][i];
            change[n - 1 - j][i] = before[i][j];
        }
    }
    return same();
}
bool four() { // reflect horizontally
    for(int i = 0; i < n; i++) {
        for(int j1 = 0, j2 = n - 1; j1 < n / 2; j1++, j2--) {
            change[i][j1] = before[i][j2];
            change[i][j2] = before[i][j1];
        }
    }
    if(n % 2) for(int i = 0; i < n; i++) change[i][n / 2] = before[i][n / 2];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) before[i][j] = change[i][j];
    }
    return same();
}
int main() {
    ifstream fin("transform.in");
    ofstream fout("transform.out");
    fin >> n;
    char atdash;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            fin >> atdash;
            if(atdash == '@') before[i][j] = true;
            orig[i][j] = before[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            fin >> atdash;
            if(atdash == '@') after[i][j] = true;
        }
    }
    if(one()) fout << 1 << endl;
    else if(two()) fout << 2 << endl;
    else if(three()) fout << 3 << endl;
    else if(four()) fout << 4 << endl;
    else if(one() || two() || three()) fout << 5 << endl;
    else {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(orig[i][j] != after[i][j]) {
                    fout << 7 << endl;
                    return 0;
                }
            }
        }
        fout << 6 << endl;
    }
}
*/
