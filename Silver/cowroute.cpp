/*
#include <iostream>
using namespace std;
int cost[500];
int nums[500];
int city[5000];
int main() {
    int a, b, n, mincost = 2000;
    cin >> a >> b >> n;
    for(int i = 0; i < n; i++) {
        cin >> cost[i] >> nums[i];
        for(int j = 0; j < nums[i]; j++) {
            cin >> city[j];
        }
        for(int j = 0; j < nums[i] - 1; j++) {
            if(city[j] == a) {
                for(int k = j; k < nums[i]; k++) {
                    if(city[k] == b) {
                        if(cost[i] < mincost) mincost = cost[i];
                    }
                }
            }
        }
    }
    if(mincost <= 1000) cout << mincost << endl;
    else cout << -1 << endl;
}
/*
 SIMULATION PROBLEM!!!
*/
