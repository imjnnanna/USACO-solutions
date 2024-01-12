/*
#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main() {
    int n, a;
    cin >> n;
    int maxc = -1;
    set<int> ids[50005];
    vector<int> start;
    cin >> a;
    start.push_back(a);
    bool yes = true;
    for(int i = 1; i < 2 * n; i++) {
        cin >> a;
        yes = true;
        for(int j = 0; j < start.size(); j++) {
            if(a == start[j]) {
                yes = false;
                start.erase(start.begin() + j);
                if(maxc < ids[start[j]].size()) maxc = ids[start[j]].size();
                break;
            }
            if(ids[start[j]].count(a) == 0) ids[start[j]].insert(a);
            else ids[start[j]].erase(a);
        }
        if(yes) start.push_back(a);
    }
    cout << maxc << endl;
}
*/
/*
#include <iostream>
#include <set>
using namespace std;
int main() {
    int n, a;
    cin >> n;
    int count = 0, maxc = -1;
    set<int> ids;
    for(int i = 0; i < 2 * n; i++) {
        cin >> a;
        if(ids.count(a) == 0) {
            count++;
            ids.insert(a);
        } else {
            count--;
            ids.erase(a);
        }
        maxc = max(maxc, count);
    }
    cout << maxc << endl;
}
*/
/*
#include <iostream>
#include <set>
#include <cmath>
using namespace std;
int main() {
    int n, a;
    cin >> n;
    int count = 0, maxc = -1;
    set<int> ids;
    for(int i = 0; i < 2 * n; i++) {
        cin >> a;
        if(ids.count(a) == 0) {
            count++;
            ids.insert(a);
        } else {
            count--;
            ids.erase(a);
        }
        maxc = max(maxc, count);
    }
    if(sqrt(maxc) <= maxc / 3.0) cout << maxc + (int)sqrt(maxc) << endl;
    else cout << maxc << endl;
}
*/
