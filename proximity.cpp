/*
#include <iostream>
using namespace std;
int id[50005];
int main() {
    int n, k;
    cin >> n >> k;
    for(int i = 1; i < n + 1; i++) {
        cin >> id[i];
    }
    int current = 0, best = -1;
    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < i; j++) {
            if(id[i] == id[j] && i - j <= k) {
                current = id[i];
            }
        }
        if(best < current && current > 0) best = current;
    }
    cout << best << endl;
}
/*
 loop, once get next breed (go in order by steadily increasing number 'count')
 for loop to check if same breed before.
 if yes - check if their indexes differ by less than k,
 if yes again - result++;
 i = sortid[count];
 */

