/*
#include <iostream>
using namespace std;
int n, c, a[1005], weights[1005];
int output = -1;
void maxsum(int ind, int sum) {
    if(sum > c) return;
    if(ind == n) {
        if(sum > output) output = sum;
        return;
    }
    if(weights[ind] + weights[ind + 1] <= c) maxsum(ind + 1, sum + weights[ind]);
    else if(weights[ind] > c) maxsum(ind + 1, sum);
    else {
        maxsum(ind + 1, sum + weights[ind]);
        maxsum(ind + 1, sum);
    }
}
int main() {
    cin >> n >> c;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int counter = 0;
    for(int i = n - 1; i >= 0; i--) {
        weights[counter] = a[i];
        counter++;
    }
    maxsum(-1, 0);
    cout << output << endl;
}
*/
