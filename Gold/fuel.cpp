/*
#include <iostream>
#include <algorithm>
using namespace std;
pair<int, int> station[50005]; // position, price;
int main() {
    int n, g, b, d;
    cin >> n >> g >> b >> d;
    for(int i = 0; i < n; i++) cin >> station[i].first >> station[i].second;
    sort(station, station + n);
    int fuelleft = b, cost = 0;
    for(int i = 0; i < n; i++) {
        int position = station[i].first, price = station[i].second;
        cout << "position = " << position << ", price = " << price << endl;
        cout << "fuelleft = " << fuelleft << ", cost = " << cost << endl;
        int nextloweststation;
        for(nextloweststation = i + 1; nextloweststation <= n; nextloweststation++) {
            if(nextloweststation == n || station[nextloweststation].second < price) break;
        }
        if(nextloweststation != n && station[nextloweststation].first - position <= g) { // if nextstation exists
            cout << "went to next lowest station." << endl;
            int fuelneeded = station[nextloweststation].first - position - fuelleft;
            cost += fuelneeded * price;
            fuelleft = 0;
            i = nextloweststation - 1;
        } else {
            cost += (g - fuelleft) * price;
            int j;
            for(j = n - 1; j >= i; j--) {
                if(station[j].first - position <= g) break;
            }
            if(j == n - 1) {
                cout << "went to end." << endl;
                cost -= fuelleft * price;
                break;
            } else if(j == i) {
                cout << "unreachable to any station." << endl;
                cost = -1;
                break;
            } else i = j - 1;
        }
    }
    cout << cost << endl;
}
*/
