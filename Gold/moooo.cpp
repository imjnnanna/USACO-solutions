/*
#include <iostream>
using namespace std;
struct moo {
    int height, volume;
};
int vol[100000];
int main() {
    int n;
    cin >> n;
    moo cow[n + 5];
    for(int i = 0; i < n; i++) cin >> cow[i].height >> cow[i].volume;
    for(int i = 0; i < n; i++) {
        for(int j = i - 1; j >= 0; j--) {
            if(cow[j].height > cow[i].height) {
                vol[j] += cow[i].volume;
                break;
            }
        }
        for(int j = i + 1; j < n; j++) {
            if(cow[j].height > cow[i].height) {
                vol[j] += cow[i].volume;
                break;
            }
        }
    }
    int maxvol = -1;
    for(int i = 0; i < n; i++) maxvol = max(vol[i], maxvol);
    cout << maxvol << endl;
}
*/
