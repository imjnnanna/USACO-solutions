/*
#include <iostream>
#include <cstring>
using namespace std;
string polygon[505];
int n, points[205][2], psum[205], optimal[205];
bool possible(int start, int end){
    for(int i = 0; i <= n; i++){
        if(i == start) continue;
        bool exists = true;
        for(int j = 0; j <= 2 * (end - start); j++){
            int ind1 = 2 * start + j;
            int ind2 = 2 * i + j;
            if(ind1 == 0 || ind1 >= n * 2 || ind2 == 0 || ind2 >= n * 2 || polygon[ind1] != polygon[ind2]){
                exists = false;
                break;
            }
        }
        if(exists) return true;
    }
    return false;
}
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> points[i][0] >> points[i][1];
    points[0][0] = points[n][0];
    points[0][1] = points[n][1];
    points[n + 1][0] = points[1][0];
    points[n + 1][1] = points[1][1];
    for (int i = 1; i <= n; i++){
        int lastp[2], currentp[2], nextp[2];
        lastp[0] = points[i - 1][0];
        lastp[1] = points[i - 1][1];
        currentp[0] = points[i][0];
        currentp[1] = points[i][1];
        nextp[0] = points[i + 1][0];
        nextp[1] = points[i + 1][1];
        bool zero = 0;
        if(currentp[1] - lastp[1] == 0) zero = 1;
        bool one = 1 - zero;
        if(!zero) {
            if(lastp[one] - currentp[one] < 0 == nextp[zero] - currentp[zero] < 0) polygon[2 * i - 2] = "R";
            else polygon[2 * i - 2] = "L";
        }
        else {
            if (lastp[one] - currentp[one] < 0 == nextp[zero] - currentp[zero] < 0) polygon[2 * i - 2] = "L";
            else polygon[2 * i - 2] = "R";
        }
        polygon[2 * i - 1] = to_string(abs(nextp[zero] - currentp[zero]));
        psum[i] = psum[i - 1] + abs(nextp[zero] - currentp[zero]);
    }
    for(int i = 1; i <= n; i++) optimal[i] = min(psum[i], psum[n] - psum[i]);
    int ans = 0;
    for (int start = 1; start <= n; start++) {
        int low = 0;
        int high = n;
        while(low < high) {
            int mid = (low + high + 1) / 2;
            if(possible(start, start + mid)) low = mid;
            else high = mid - 1;
        }
        if(high < n) high++;
        if(start + high > n) continue;
        int lightsout = psum[start + high] - psum[start] + optimal[start + high];
        ans = max(ans, lightsout - optimal[start]);
    }
    cout << ans << endl;
}
*/
