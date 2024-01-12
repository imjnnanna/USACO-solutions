// 6 - profits (longest contiguous subset)
// 1 - mountain watching, find width of widest mountain
// 7 - buying feed
// 5 - sunscreen
// 8 - cow tours
// 3 - baler
// 2 - cow linte
// 4 - castle
/*
#include <iostream>
using namespace std;
int n;
int heights[100005];
int main() {
    cin >> n;
    int best = -1, dupl = 1, count = 0, a = 0;
    bool increase = true; // if increasing, true; else, false (decreasing)
    cin >> heights[0];
    a = heights[0];
    for(int i = 1; i < n; i++) {
        cin >> heights[i];
        if(a == heights[i]) dupl++;
    }
    if(dupl == n) {
        cout << n << endl;
        return 0;
    }
    dupl = 1;
    for(int i = 0; i < n - 1; i++) {
        if(heights[i] == heights[i + 1]) {
            dupl++;
            count++;
        } else if(heights[i] > heights[i + 1]) { // decreasing
            dupl = 1;
            count++;
            increase = false;
        } else { // increasing
            if(!increase) { // mountain has ended
                best = max(best, count);
                increase = true;
                count = dupl;
                dupl = 1;
            } else {
                dupl = 1;
                count++;
            }
        }
    }
    best = max(best, count);
    cout << best + 1 << endl;
}
*/
