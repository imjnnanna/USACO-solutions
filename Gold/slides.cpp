/*
#include <iostream>
#include <vector>
using namespace std;
vector<pair<int, int>> outEdges[50000];
long long memo[50000][11];
int V, E, K;
long long fun(int current, int k) {
    if (memo[current][k] != 1000000000) return memo[current][k];
    long long answer = 0;
    for (int i = 0 ; i < outEdges[current].size() ; i++) {
        long long cool = outEdges[current][i].second;
        cool += fun(outEdges[current][i].first, k);
        answer = max(answer, cool);
    }
    if(k > 0) {
        for (int i = 0 ; i < outEdges[current].size() ; i++) {
            long long cool = outEdges[current][i].second;
            cool += fun(outEdges[current][i].first, k - 1);
            if (answer > cool)
                answer = cool;
        }
    }
    return memo[current][k] = answer;
}
int main() {
    cin >> V >> E >> K;
    for (int i = 0 ; i < E ; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        outEdges[a - 1].push_back (make_pair (b - 1, c));
    }
    for(int i = 0; i < 50000; i++) {
        for(int j = 0; j < 11; j++) {
            memo[i][j] = 1000000000;
        }
    }
    cout << fun(0, K) << endl;
}
*/
