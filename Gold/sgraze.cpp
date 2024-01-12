/*
#include <iostream>
#include <algorithm>
using namespace std;
struct range {
    int sp, ep;
};
bool comp(range a, range b) {
    return a.ep < b.ep;
}
int main() {
    int n;
    cin >> n;
    range cow[n];
    for(int i = 0; i < n; i++) {
        cin >> cow[i].sp >> cow[i].ep;
    }
    sort(cow, cow + n, comp);
    int count = 1;
    int end = cow[0].ep;
    for(int i = 1; i < n; i++) {
        if(cow[i].sp >= end) {
            end = cow[i].ep;
            count++;
        }
    }
    cout << count << endl;
}
*/
