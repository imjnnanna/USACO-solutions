/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool tros(pair<int, string> a, pair<int, string> b) {
    return(a.second < b.second);
}
bool comp(string a, string b) {
    for(int i = 0; i < a.length(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}
int main() {
    int w, n;
    cin >> w >> n;
    string alphadict[w + 5];
    pair<int, string> part[w + 5];
    for(int i = 0; i < w; i++) {
        cin >> alphadict[i];
        part[i].second = alphadict[i];
        part[i].first = i;
    }
    sort(alphadict, alphadict + w);
    sort(part, part + w, tros);
    string word;
    int k;
    int inds;
    for(int i = 0; i < n; i++) {
        cin >> k >> word;
        
        inds = lower_bound(alphadict, alphadict + w, word) - alphadict;
        inds += k - 1;
        if(k >= w) {
            cout << -1 << endl;
        } else if(comp(word, alphadict[inds])) {
            cout << part[inds].first + 1 << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
*/
