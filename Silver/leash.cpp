/*
#include <iostream>
#include <algorithm>
using namespace std;
struct leash {
    int sp, ep;
};
bool compare(leash a, leash b) {
    return a.ep < b.ep;
}
int main() {
    int n;
    cin >> n;
    leash sted[n];
    for(int i = 0; i < n; i++) {
        cin >> sted[i].sp >> sted[i].ep;
        sted[i].ep += sted[i].sp;
    }
    sort(sted, sted + n, compare);
    double cut;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(sted[i].ep == 0) continue;
        cut = sted[i].ep - 0.5;
        for(int j = 0; j < n; j++) {
            if(sted[j].sp < cut) {
                sted[j].ep = 0;
                sted[j].sp = 0;
            }
        }
        count++;
    }
    cout << count << endl;
}

/*
 GREEDY PROBLEM!!!
 sort endpoints
 get earliest endpoint leash, cut right before endpoint
 - if startpoint is before that cut, get rid of leash
 - count++
 print count
 */
