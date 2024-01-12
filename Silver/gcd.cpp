/*
#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if(b == 0) return a;
    if(a == 0) return b;
    if(a > b) return gcd(a, a - b);
    else return gcd(b, b - a);
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
}
*/
