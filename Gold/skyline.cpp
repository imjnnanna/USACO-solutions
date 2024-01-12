/*
#include <iostream>
#include <stack>
using namespace std;
stack<int> build;
int main() {
    int n, w, ans = 0, x, height;
    cin >> n >> w;
    for(int iterate = 0; iterate < n; iterate++) {
        cin >> x >> height;
        if(height == 0) {
            while(!build.empty()) build.pop();
            continue;
        }
        if(build.empty()) {
            build.push(height);
            ans++;
            continue;
        }
        while(!build.empty() && build.top() > height) build.pop();
        if(build.empty() || build.top() < height) {
            ans++;
            build.push(height);
        }
    }
    cout << ans << endl;
}
*/
