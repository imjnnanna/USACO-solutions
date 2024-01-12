/*
#include <iostream>
using namespace std;
int main() {
    int n, a, count = 0;
    cin >> n;
    bool nonloopy[n + 1];
    for(int i = 1; i < n + 1; i++) {
        nonloopy[i] = false;
    }
    int cows[n + 1];
    for(int i = 1; i < n + 1; i++) {
        cin >> a;
        cows[i] = a;
    }
    for(int i = 1; i < n + 1; i++) {
        if(cows[i] == 0) nonloopy[i] = true;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < n + 1; j++) {
            if(nonloopy[cows[j]] == true) {
                nonloopy[j] = true;
            }
        }
    }
    for(int i = 1; i < n + 1; i++) {
        if(nonloopy[i] == true) {
            count++;
        }
    }
    cout << count << endl;
}

/*
 mark all the ones with 0s true;
 loop n times through array - in the cows array, if the cow's forwarding cow's index is the cow with the zero index, then the index of the cow is not loopy!
 repeat n times.
 */
