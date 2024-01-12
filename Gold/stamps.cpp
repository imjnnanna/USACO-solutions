/*
#include <iostream>
using namespace std;
int n, k;
int stampval[205];
int dpways[2000006];
int dpnumofcoins[2000006];
int main() {
    cin >> k >> n;
    for(int i = 1; i <= n; i++) cin >> stampval[i];
    for(int i = 1; i <= 2000005; i++) dpnumofcoins[i] = 1000000000;
    dpways[0] = 1;
    dpnumofcoins[0] = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= 2000005; j++) {
            if(j + stampval[i] <= 2000005) {
                dpways[j + stampval[i]] += dpways[j];
                dpnumofcoins[j + stampval[i]] = min(dpnumofcoins[j + stampval[i]], dpnumofcoins[j] + 1);
            }
        }
    }
    for(int i = 1; i <= 2000005; i++) {
        if(dpnumofcoins[i] > k) {
            cout << i - 1 << endl;
            break;
        }
    }
}
*/
