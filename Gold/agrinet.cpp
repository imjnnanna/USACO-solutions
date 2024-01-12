/*
#include <iostream>
using namespace std;
int best[105][105];
int n;
bool vis[105];
int arr[105];
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> best[i][j];
        }
    }
    for(int i = 1; i < n; i++) {
        arr[i] = 1000000000;
    }
    int ans = 0, ind = 0;
    for(int asd = 0; asd < n; asd++) {
        int minb = 1000000000;
        for(int j = 0; j < n; j++) {
            if(!vis[j] && arr[j] < minb) {
                minb = arr[j];
                ind = j;
            }
        }
        ans += arr[ind];
        for(int j = 0; j < n; j++) {
            arr[j] = min(arr[j], best[ind][j]);
        }
        vis[ind] = true;
    }
    cout << ans << endl;
}
*/
