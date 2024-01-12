/*
#include <iostream>
using namespace std;
int t, n, z;
bool pick[25] = {false};
int ct = 0;
int res[52][25];
void process() {
    for(int i = 0; i < n; i++) {
        int num = res[i][0];
        int sum = 0;
        for(int j = 1; j <= num; j++) {
            if(pick[res[i][j]]) {
                sum++;
            }
        }
        if(sum == num) return;
    }
    ct++;
}
void gen(int ind) { // ind = up to which topping I've considered
    if(ind > t) {
        process();
        return;
    }
    pick[ind] = true;
    gen(ind + 1);
    pick[ind] = false;
    gen(ind + 1);
}
int main() {
    cin >> t >> n;
    for(int i = 0; i < n; i++) {
        cin >> z;
        res[i][0] = z;
        for(int j = 1; j <= z; j++) {
            cin >> res[i][j];
        }
    }
    gen(1);
    cout << ct << endl;
}
/*
 Every subset into an array, and going by line by line if it doesn't meet that line's constraint then make subset into '0'
 count everything that is bigger than 0
 */
