/*
#include <iostream>
#include <cmath>
using namespace std;
int base(int n,int base) {
    int result = 0;
    result += n / 100 * base * base;
    result += n / 10 % 10 * base;
    result += n % 10;
    return result;
}
int main() {
    int n, a, b;
    cin >> n;
    for(int f = 0; f < n; f++) {
        int basex[15000], basey[15000];
        cin >> a >> b;
        for(int i = 10; i < 15000; i++) {
            basex[i] = base(a, i);
            basey[i] = base(b, i);
        }
        int xp = 10, yp = 10;
        while(basex[xp] != basey[yp]) {
            if(basex[xp] > basey[yp]) {
                yp++;
            } else {
                xp++;
            }
        }
        cout << xp << " " << yp << endl;
    }
}
 */
