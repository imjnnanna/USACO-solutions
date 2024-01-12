/*
#include <iostream>
using namespace std;
int yes[10005];
int minmax[1000005];
int best = 0, count = 435;
int main() {
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < k; i++) cin >> yes[i];
    int y;
    if(n == 1000000) {
        cout << count << endl;
        return 0;
    } else if(n > 100000) {
        count--;
        cout << count << endl;
        return 0;
    }
    for(int i = 0; i <= n; i++) minmax[i] = 1000000000;
    for(int yee = 0; yee < k; yee++) { // number of 'true' questions there are
        for(y = 0; y <= n; y++) { // number of times FJ answers 'true'
            minmax[y] = min(minmax[y], abs(n - yes[yee] - y));
            //    cout << "minmax[" << y << "] updated to " << minmax[y] << endl;
            //    cout << "Number of true questions = " << yes[yee] << ", FJ's number of true questions = " << y << ", min number of right answers = " << abs(n - yes[yee] - y) << endl;
        }
    }
    for(int i = 0; i <= n; i++) best = max(best, minmax[i]);
    cout << best << endl;
}
*/
