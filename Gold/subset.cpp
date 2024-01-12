/*
#include <iostream>
using namespace std;
long long nums[42];
void doeverything() {
    int n;
    cin >> n;
    int num = n * (n + 1);
    if(num % 4 != 0) {
        cout << 0 << endl;
        return;
    }
    num /= 4;
    nums[0] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = num; j >= i; j--) {
            nums[j] += nums[j - i];
        }
    }
    cout << nums[num] / 2 << endl;
}
int main() {
    doeverything();
}
*/
