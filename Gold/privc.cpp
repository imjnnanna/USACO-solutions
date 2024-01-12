/*
#include <iostream>
#include <algorithm>
using namespace std;
int n, nums[1005], sorted[1005];
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
        sorted[i] = nums[i];
    }
    sort(sorted, sorted + n);
    int onetwo = 0, onethree = 0, twoone = 0, twothree = 0, threeone = 0, threetwo = 0;
    for(int i = 0; i < n; i++) {
        if(sorted[i] == 1) {
            if(nums[i] == 2) twoone++;
            if(nums[i] == 3) threeone++;
        }
        if(sorted[i] == 2) {
            if(nums[i] == 1) onetwo++;
            if(nums[i] == 3) threetwo++;
        }
        if(sorted[i] == 3) {
            if(nums[i] == 1) onethree++;
            if(nums[i] == 2) twothree++;
        }
    }
    int ans = 0;
    
    int hi = min(onetwo, twoone);
    ans += hi;
    onetwo -= hi;
    twoone -= hi;
    
    hi = min(onethree, threeone);
    ans += hi;
    onethree -= hi;
    threeone -= hi;
    
    hi = min(twothree, threetwo);
    ans += hi;
    twothree -= hi;
    threetwo -= hi;
    cout << 2 * (twoone + threeone) + ans << endl;
}
*/
