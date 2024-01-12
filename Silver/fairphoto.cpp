/*
#include <iostream>
#include <algorithm>
using namespace std;
int prefix[200005];
struct cow {
    int ind;
    char breed;
};
bool comp(cow cows, cow b) {
    return cows.ind < b.ind;
}
int main() {
    int n;
    cin >> n;
    cow cows[n];
    for(int i = 0; i < n; i++) cin >> cows[i].ind >> cows[i].breed;
    sort(cows, cows + n, comp);
    int result = 0, count;
    for(int i = 0; i < n; ) {
        count = 1;
        while(i + count < n && cows[i].breed == cows[i + count].breed) count++;
        result = max(result, cows[i + count - 1].ind - cows[i].ind);
        i += count;
    }
    int ind = 0;
    for(int i = 0; i < 200005; i++) prefix[i] = 1000000000;
    for(int i = 0; i < n; i++) {
        prefix[n + ind] = min(prefix[n + ind], cows[i].ind);
        if(cows[i].breed == 'W') ind++;
        else ind--;
        result = max(result, cows[i].ind - prefix[n + ind]);
    }
    cout << result << endl;
}
*/
