/*
#include <iostream>
#include <algorithm>
using namespace std;
struct cross {
    int first, second, ind;
};
cross crossings[100000];
bool compfirst(cross a, cross b) {
    return a.first < b.first;
}
bool compsecond(cross a, cross b) {
    return a.second < b.second;
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) { // get coordinates
        cin >> crossings[i].first >> crossings[i].second;
    }
    sort(crossings, crossings + n, compsecond);
    for (int i = 0; i < n; i++) { // get order of end points and store it in ind
        crossings[i].ind = i;
    }
    sort(crossings, crossings + n, compfirst); // sort by the first points
    int safe = 0, maxind = -1; // maxind is the least it can be
    for (int i = 0; i < n; i++) { // run through all coordinates
        if(crossings[i].ind == i && maxind == i - 1) safe++; // coordinates equal to this loop's turn, ind is right before maxind or is 0
        if(crossings[i].ind > maxind) maxind = crossings[i].ind; // update maxind
    }
    cout << safe << endl;
}
*/
