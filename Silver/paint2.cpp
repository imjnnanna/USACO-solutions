/*
#include <iostream>
using namespace std;
int main() {
    int n, k, count = 0, a, b;
    cin >> n >> k;
    int r[k], c[k];
    for(int i = 0; i < k; i++) {
        cin >> a >> b;
        r[i] = a - 1;
        c[i] = b - 1;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            bool ean = true;
            for(int l = 0; l < k; l++) {
                if(i != r[l] && j != c[l] && i - r[l] != j - c[l] && i - r[l] != c[l] - j) {
                    ean = false;
                }
            }
            if(ean == true) {
                count++;
            }
        }
    }
    cout << count << endl;
}
/*
 1) if delta r or delta c is 0
 2) if delta r = delta c or delta r = -delta c
 
 Loop through all the spots
 - Loop through all cows
 -- do test.
 */
