/*
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int n, hay[50005], lefto[50005], righto[50005], mins[50005];
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> hay[i];
    sort(hay, hay + n);
    lefto[0] = 0;
    lefto[1] = hay[1] - hay[0];
    for(int i = 2; i < n; i++) {
        if(hay[i] - hay[i - 2] <= lefto[i - 1]) lefto[i] = max(hay[i] - hay[i - 2], lefto[i - 1]);
        else lefto[i] = max(lefto[i - 1] + 1, hay[i] - hay[i - 1]);
    }
    righto[n - 1] = 0;
    righto[n - 2] = hay[n - 1] - hay[n - 2];
    for(int i = n - 3; i >= 0; i--) {
        if(hay[i + 2] - hay[i] <= righto[i + 1]) righto[i] = max(hay[i + 2] - hay[i], righto[i + 1]);
        else righto[i] = max(righto[i + 1] + 1, hay[i + 1] - hay[i]);
    }
    for(int i = 0; i < n; i++) {
        lefto[i]++;
        righto[i]++;
    }
    double best = 1000000000;
    int i = 0, j = n - 1;
    while (i < j) {
        best = min(best, max((hay[j] - hay[i]) / 2.0, (double)max(lefto[i], righto[j])));
        if (lefto[i + 1] < righto[j - 1]) i++;
        else j--;
    }
    cout << fixed << setprecision(1) << best << endl;
}
*/
