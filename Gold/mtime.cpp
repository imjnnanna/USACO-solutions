/*
#include <iostream>
#include <algorithm>
using namespace std;
pair<int, int> job[1005];
int deadline[1005];
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> job[i].second >> job[i].first;
    sort(job, job + n);
    deadline[n - 1] = job[n - 1].first - job[n - 1].second;
    for(int i = n - 2; i >= 0; i--) deadline[i] = min(job[i].first - job[i].second, deadline[i + 1] - job[i].second);
    cout << max(deadline[0], -1) << endl;
}
*/
