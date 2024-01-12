/*
#include <iostream>
using namespace std;
int n, k;
int theorems[100005];
int usetechnique(int ind, bool isawake[]) {
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        if(i == ind) {
            for(int j = i; j <= i + k - 1; j++) isawake[j] = true;
        }
        if(isawake[i]) {
            ans += theorems[i];
        }
    }
    return ans;
}
int main() {
    cin >> n >> k;
    bool isawake[n + 1];
    for(int i = 1; i <= n; i++) {
        cin >> theorems[i];
    }
    for(int i = 1; i <= n; i++) {
        cin >> isawake[i];
    }
    int maxth = -1;
    for(int i = 1; i <= n - k + 1; i++) { // use technique at index i
        maxth = max(maxth, usetechnique(i, isawake));
    }
    cout << maxth << endl;
}
*/
