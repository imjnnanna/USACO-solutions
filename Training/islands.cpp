/*
#include <iostream>
#include <algorithm>
using namespace std;
struct island {
    int height, index;
};
bool comp(island a, island b) {
    return a.height < b.height;
}
island arrs[100005];
int main() {
    int n;
    cin >> n;
    char letters[n];
    for(int i = 0; i < n; i++) {
        cin >> arrs[i].height;
        arrs[i].index = i;
        letters[i] = 'L';
    }
    sort(arrs, arrs + n, comp);
    int current = 1, max = 1;
    for(int i = 0; i < n; i++) {
        letters[arrs[i].index] = 'W';
        if(arrs[i].index > 0 && arrs[i].index < n - 1) {
            if(letters[arrs[i].index - 1] == 'L' && letters[arrs[i].index + 1] == 'L') current++;
            else if(letters[arrs[i].index - 1] == 'W' && letters[arrs[i].index + 1] == 'W') current--;
        }
        if(current > max && (arrs[i + 1].height > arrs[i].height || i == n - 1)) max = current;
    }
    cout << max << endl;
}
/*
LLL -> LWL (count++)
WLW -> WWW (count--)
Sample input:
8
3
5
2
3
1
4
2
3

Sample output:
4
*/
