/*
#include <iostream>
using namespace std;
int fields[2005][2005];
bool vis[2005];
int arr[2005];
int main() {
    int n, c;
    cin >> n >> c;
    int temp[n + 5][2];
    int xi, yi, xj, yj;
    for(int i = 0; i < n; i++) { // Euclidean distance = (xi - xj)^2 + (yi - yj)^2
        cin >> temp[i][0] >> temp[i][1];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            xi = temp[i][0];
            yi = temp[i][1];
            xj = temp[j][0];
            yj = temp[j][1];
            if(i != j) {
                if((xi - xj) * (xi - xj) + (yi - yj) * (yi - yj) >= c) fields[i][j] = (xi - xj) * (xi - xj) + (yi - yj) * (yi - yj);
                else fields[i][j] = 1000000000;
            } else fields[i][j] = 0;
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
            arr[j] = min(arr[j], fields[ind][j]);
        }
        vis[ind] = true;
    }
    int counter = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != 1000000000) counter++;
    }
    if(counter < n) cout << -1 << endl;
    else cout << ans << endl;
}
*/
