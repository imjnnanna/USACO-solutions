/*
#include <cstring>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    string three[3];
    string names[n];
    for(int i = 0; i < n; i++) {
        cin >> three[0] >> three[1] >> three[2];
        sort(three, three + 3);
        names[i] += three[0] + " " + three[1] + " " + three[2];
    }
    int count = 0, max = 0;
    for(int i = 0; i < n; i++) {
        count = 0;
        for(int j = 0; j < n; j++) {
            if(names[i] == names[j]) {
                count++;
            }
        }
        if(count > max) max = count;
    }
    cout << max << endl;
}
*/
