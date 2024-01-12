/*
#include <iostream>
#include <algorithm>
using namespace std;
struct team {
    int prob, time;
};
bool comp(team a, team b) {
    if(a.prob == b.prob) return a.time < b.time;
    else return (a.prob > b.prob);
}
int main() {
    int n, k;
    cin >> n >> k;
    team arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i].prob >> arr[i].time;
    }
    sort(arr, arr + n, comp);
    int count = 1;
    team place = arr[k - 1];
    for(int i = k; i < n; i++) {
        if(arr[i].prob == place.prob && arr[i].time == place.time) count++;
        else break;
    }
    for(int i = k - 2; i >= 0; i--) {
        if(arr[i].prob == place.prob && arr[i].time == place.time) count++;
        else break;
    }
    cout << count << endl;
}
*/
