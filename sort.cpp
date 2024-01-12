/*
#include <iostream>
#include <algorithm>
using namespace std;
struct boba {
    int num, ind;
};
bool comp(boba a, boba b) {
    if(a.num == b.num) return a.ind < b.ind;
    return a.num < b.num;
}
int main() {
    int n;
    cin >> n;
    boba tea[n];
    for(int i = 0; i < n; i++) {
        cin >> tea[i].num;
        tea[i].ind = i;
    }
    sort(tea, tea + n, comp);
    int max = 0;
    for(int i = 0; i < n; i++) {
        int milk = tea[i].ind - i + 1;
        if(milk > max) max = milk;
    }
    cout << max << endl;
}


// max distance that any number has to move to the left
*/
