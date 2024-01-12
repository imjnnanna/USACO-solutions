/*
#include <iostream>
#include <vector>
using namespace std;
vector<int> cows[80005];
int main() {
    int n, newcow;
    cin >> n;
    char query;
    for(int i = 1; i <= n; i++) { // everything shall be inside this gigantic for loop mwahaha
        cin >> query;
        if(query == 'a') {
            cin >> newcow;
            for(int j = 0; j < cows[i - 1].size(); j++) cows[i].push_back(cows[i - 1][j]);
            cows[i].push_back(newcow);
        } else if(query == 't') {
            cin >> newcow;
            for(int j = 0; j < cows[newcow - 1].size(); j++) cows[i].push_back(cows[newcow - 1][j]);
        } else { // query == 's'
            for(int j = 0; j < cows[i - 1].size() - 1; j++) cows[i].push_back(cows[i - 1][j]);
        }
        if(cows[i].size() > 0) cout << cows[i][cows[i].size() - 1] << endl;
        else cout << -1 << endl;
    }
}
*/
