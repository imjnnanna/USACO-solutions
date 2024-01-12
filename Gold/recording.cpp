/*
#include <iostream>
#include <algorithm>
using namespace std;
pair<int, int> arr[155];
pair<int, int> arr2[155];
bool comp(pair<int, int> a, pair<int ,int> b) {
    return a.second < b.second;
}
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> arr[i].first >> arr[i].second;
    sort(arr + 1, arr + 1 + n, comp);
    int output = 0;
    int end1 = 0, end2 = 0;
    for(int i = 1; i <= n; i++) {
        if(end1 >= end2) {
            if(arr[i].first >= end1) {
                end1 = arr[i].second;
                output++;
            } else if(arr[i].first >= end2) {
                end2 = arr[i].second;
                output++;
            }
        } else {
            if(arr[i].first >= end2) {
                end2 = arr[i].second;
                output++;
            } else if(arr[i].first >= end1) {
                end1 = arr[i].second;
                output++;
            }
        }
    }
    cout << output << endl;
}
*/
