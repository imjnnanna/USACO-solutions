/*
#include <iostream>
using namespace std;
struct day {
    int need, cost;
};
day arr[100005];
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i].need >> arr[i].cost;
    }
    int money = 0, meat = 0, currentcost = arr[0].cost;
    for(int i = 0; i < n; i++) {
        meat -= arr[i].need;
        if(meat < 0) {
            money += -1 * meat * currentcost;
            meat = 0;
        }
        if(arr[i].cost > arr[i + 1].cost) {
            currentcost = arr[i + 1].cost;
        }
    }
    cout << money << endl;
}
*/
