/*
#include <iostream>
#include <algorithm>
using namespace std;
struct roped {
    int start, end;
};
bool comp(roped a, roped b) {
    return a.start < b.start;
}
int behav[31255];
int main() {
    int n, m, a, b;
    cin >> n >> m;
    roped pairs[m + 3125];
    for(int i = 1; i < m + 1; i++) {
        cin >> a >> b;
        if(a < b) {
            pairs[i].start = a;
            pairs[i].end = b;
        } else {
            pairs[i].start = b;
            pairs[i].end = a;
        }
    }
    sort(pairs, pairs + m + 1, comp);
    behav[1] = true;
    for(int i = 1; i < m + 1; i++) {
        if(behav[pairs[i].start] != 0) {
            behav[pairs[i].end]++;
        }
        if(behav[pairs[i].end] != 0) {
            behav[pairs[i].start]++;
        }
    }
    for(int i = 1; i < m + 1; i++) {
        if(behav[pairs[i].start] != 0) {
            behav[pairs[i].end]++;
        }
        if(behav[pairs[i].end] != 0) {
            behav[pairs[i].start]++;
        }
    }
    int counter = 0;
    for(int i = 1; i < n + 1; i++) {
        if(behav[i] == 0) {
            cout << i << endl;
            counter++;
        }
    }
    if(counter == 0) cout << counter << endl;
}
*/
