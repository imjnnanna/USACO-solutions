/*
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
    if(n == 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int d, n, power, a, b;
    cin >> d >> n;
    
    power = pow(10, d);
    
    while(true){
        a = n % power;
        b = n / power;
        if((isPrime(a) == true && isPrime(b) == true) && (a >= pow(10, d - 1) && b >= pow(10, d - 1))) {
            cout<< n << endl;
            break;
        }
        else {
            n++;
        }
    }
}
*/
