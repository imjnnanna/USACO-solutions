/*
// GREEDY
#include <iostream>
#include <algorithm>
using namespace std;
struct pairs {
    int prod, nums;
};
bool comp(pairs a, pairs b) {
    return a.prod < b.prod;
}
int main() {
    int n;
    cin >> n;
    pairs input[n];
    for(int i = 0; i < n; i++) {
        cin >> input[i].nums >> input[i].prod;
    }
    int max = 0;
    sort(input, input + n, comp);
    int i = 0, j = n - 1;
    do {
        int time = input[i].prod + input[j].prod;
        if(time > max) max = time;
        if(input[i].nums > input[j].nums) {
            input[i].nums -= input[j].nums;
            j--;
        } else if(input[j].nums > input[i].nums){
            input[j].nums -= input[i].nums;
            i++;
        } else {
            i++;
            j--;
        }
        if(i == j) break;
    } while(i != n && j != 0);
    cout << max << endl;
}
*/
