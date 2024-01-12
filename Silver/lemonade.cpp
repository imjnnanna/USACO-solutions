/*
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int cows[n];
    for(int i = 0; i < n; i++) {
        cin >> cows[i];
        cows[i] *= -1;
    }
    sort(cows, cows + n);
    for(int i = 0; i < n; i++) {
        cows[i] *= -1;
    }
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(cows[i] < count) break;
        else count++;
    }
    cout << count << endl;
}
*/
