/*
#include <iostream>
#include <algorithm>
using namespace std;
struct choc {
    long long per, cow;
};
bool comp(choc a, choc b) {
    return a.per < b.per;
}
int main() {
    int n;
    long long b, sat = 0;
    cin >> n >> b;
    choc nums[n];
    for(int i = 0; i < n; i++) {
        cin >> nums[i].per >> nums[i].cow;
    }
    sort(nums, nums + n, comp);
    for(int i = 0; i < n; i++) {
        if(b >= nums[i].per) {
            if(b >= nums[i].per * nums[i].cow) {
                sat += nums[i].cow;
                b -= nums[i].per * nums[i].cow;
            } else {
                sat += b / nums[i].per;
                b %= nums[i].per;
            }
        } else {
            break;
        }
    }
    cout << sat << endl;
}
*/
