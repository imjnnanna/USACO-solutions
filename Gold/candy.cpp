/*
#include <iostream>
using namespace std;
int n, nopt, f, m;
int option[55], favnum[55], dp1[40105], dp2[40105];
int f2(int candies);
int f1(int candies) {
    if(candies == 0) return 0;
    if(dp1[candies] == 0) {
        dp1[candies] = 1000000000;
        int biggest = 0;
        for(int i = 0; i < nopt; i++) {
            if(candies - option[i] >= 0) biggest = max(biggest, option[i] + f2(candies - option[i]));
        }
        dp1[candies] = biggest;
    }
    return dp1[candies];
}
int f2(int candies) {
    if(candies == 0) return 0;
    if(dp2[candies] == 0) {
        dp2[candies] = 1000000000;
        int biggest = f1(candies);
        for(int i = 0; i < f; i++) {
            if(candies == favnum[i]) biggest = max(biggest, f2(candies + m));
        }
        dp2[candies] = biggest;
    }
    return dp2[candies];
}
int main() {
    cin >> n >> nopt >> f >> m;
    for(int i = 0; i < nopt; i++) cin >> option[i];
    for(int i = 0; i < f; i++) cin >> favnum[i];
    //    for(int i = 0; i <= n + 4; i++) dp1[i] = dp2[i] = -1;
    if(f1(n) >= 1000000000) cout << -1 << endl;
    else cout << f1(n) << endl;
}
*/
