/*
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double grid[1005][1005];
long long n, m; // n = number of farms, m = number of roads  already connected
double arr[1005], temp[1005][2], temp2[1005][2];
bool vis[1005];
bool connected(long long i, long long j) {
    for(long long ind = 1; ind <= m; ind++) {
        if((temp2[ind][0] == i && temp2[ind][1] == j) || (temp2[ind][0] == j && temp2[ind][1] == i)) {
            return true;
        }
    }
    return false;
}
double mst() {
    double len = 0; //initial length of MST is 0
    for(long long i = 1; i <= n; i++) arr[i] = 1000000000;
    arr[0] = 0; // start from vertex 1
    arr[1] = 0;
    for(long long i = 1; i <= n; i++) {
        // choose the unused edge with minimum length in the queue
        long long x = 0;
        for(long long j = 1; j <= n; j++) {
            if(!vis[j]) {
                if(x == 0 || arr[x] > arr[j]) {
                    x = j;
                }
            }
        }
        vis[x] = true;
        // explore vertices or update edges in the queue
        for(long long j = 1; j <= n; j++) {
            if(!vis[j]) {
                if(arr[j] > grid[x][j]) {
                    arr[j] = grid[x][j];
                }
            }
        }
        // update total cost of mst
        len += arr[x];
    }
    return len;
}
int main() {
    cin >> n >> m;
    for(long long i = 1; i <= n; i++) { // Euclidean distance = (xi - xj)^2 + (yi - yj)^2
        cin >> temp[i][0] >> temp[i][1];
    }
    long long xi, yi, xj, yj;
    for(long long i = 1; i <= m; i++) {
        cin >> temp2[i][0] >> temp2[i][1];
    }
    for(long long i = 1; i <= n; i++) {
        for(long long j = 1; j <= n; j++) {
            xi = temp[i][0];
            yi = temp[i][1];
            xj = temp[j][0];
            yj = temp[j][1];
            if(connected(i, j) == true || i == j) {
                grid[i][j] = 0;
                grid[j][i] = 0;
            } else {
                grid[i][j] = sqrt((xi - xj) * (xi - xj) + (yi - yj) * (yi - yj));
                grid[j][i] = grid[i][j];
            }
        }
    }
    cout << fixed << setprecision(2) << mst() << endl;
}
*/
