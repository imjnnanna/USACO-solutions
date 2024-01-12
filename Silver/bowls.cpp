/*
#include <iostream>
using namespace std;
bool bowls[20];
int best = 100000000, current = 0;
bool allzero(bool arr[20]) {
    for(int i = 0; i < 20; i++) if(arr[i]) return false;
    return true;
}
void flip(int ind, bool clone[20]) {
    if(ind == 20) {
        if(allzero(clone) && current < best) best = current;
        return;
    }
    if(current > best) return;
    if(ind == 0) current = 0;
    flip(ind + 1, clone);
    current++;
    if(ind == 0) {
        clone[ind] = !clone[ind];
        clone[ind + 1] = !clone[ind + 1];
    } else if(ind == 19) {
        clone[ind - 1] = !clone[ind - 1];
        clone[ind] = !clone[ind];
    } else {
        clone[ind - 1] = !clone[ind - 1];
        clone[ind] = !clone[ind];
        clone[ind + 1] = !clone[ind + 1];
    }
    flip(ind + 1, clone);
}
int main() {
    for(int i = 0; i < 20; i++) cin >> bowls[i];
    flip(0, bowls);
    cout << best << endl;
}
*/
