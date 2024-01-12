/*
#include <iostream>
using namespace std;
int bit[100005], n;
int get(int ind) {
    int ans = 0;
    while(ind > 0) {
        ans += bit[ind];
        ind -= ind& - ind;
    }
    return ans;
}
int main() {
    cin >> n;
    int nums[n + 1];
    for(int i = 1; i <= n; i++) cin >> nums[i];
    for(int i = 1; i <= n; i++) {
        int j = i;
        while(j < n) {
            bit[j] += nums[j];
            j += j& - j;
        }
    }
}
*/
