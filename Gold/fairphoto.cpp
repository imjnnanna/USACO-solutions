/*
#include <iostream>
#include <algorithm>
using namespace std;
int prefix[200005];
struct cow {
    int ind;
    char breed;
} cows[100005];
bool comp(cow cows, cow b) {
    return cows.ind < b.ind;
}
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> cows[i].ind >> cows[i].breed;
    sort(cows, cows + n, comp);
    int result = 0, count;
    for(int i = 0; i < n; i++) {
        count = 1;
        while(i + count < n && cows[i].breed == cows[i + count].breed) count++;
        result = max(result, cows[i + count].ind - cows[i].ind);
        i += count;
    }
    int ind = 0;
    for(int i = 0; i < 200005; i++) prefix[i] = n;
    for(int i = 0; i < n; i++) {
        prefix[n + ind] = min(prefix[n + ind], cows[i].ind);
        if(cows[i].breed == 'W') ind++;
        else ind--;
        result = max(result, cows[i].ind - prefix[n + ind]);
    }
    cout << result << endl;
}
*/
/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <map>

using namespace std;

#define MAXN 100010
#define INF 1000000010

int main() {
    freopen("fairphoto.in", "r", stdin);
    freopen("fairphoto.out", "w", stdout);
    
    int N; cin >> N;
    vector<pair<int, char> > A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i].first >> A[i].second;
    }
    sort(A.begin(), A.end());
    
    int ps = 0;
    int result = 0;
    vector<pair<int, int> > V[2];
    for(int i = 0; i < N; i++) {
         if (V[ps & 1].empty() || V[ps & 1].back().first < ps) {
         V[ps & 1].push_back(make_pair(ps, A[i].first));
         }
        ps += A[i].second == 'W' ? -1 : 1;
        if (!V[ps & 1].empty() && ps <= V[ps & 1].back().first) {
            result = max(result, A[i].first -
                         lower_bound(V[ps & 1].begin(), V[ps & 1].end(),
                                     make_pair(ps, -INF))->second);
        }
    }
    cout << result << endl;
    return 0;
}
*/
