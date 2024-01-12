/*
#include <iostream>
#include <stack>
using namespace std;
long long n;
bool arr[100005];
long long far[100005];
long long solve(long long l, long long r) {
    if(l + 1 == r) return 1;
    if(far[l] == r) return 2 * solve(l + 1, r - 1) % 12345678910;
    return solve(l, far[l]) % 12345678910 + solve(far[l] + 1, r) % 12345678910;
}
int main() {
    cin >> n;
    for(long long i = 0; i < n; i++) cin >> arr[i];
    stack<int> s;
    for(long long i = n - 1; i >= 0; i--) {
        if(arr[i]) s.push(i);
        else {
            far[i] = s.top();
            s.pop();
        }
    }
    cout << solve(0, n - 1) << endl;
}
*/
