/*
 BRUTE FORCE:
 Try every city c,
 find cheapest route A -> C
 find cheapest route C -> B
 Add above two.
 find cheapest route A -> B
 Compare the two min prices.
 
 BEST SOLUTION:
 int minAtoC = 1000; - search for C after when A appears
 int minCtoB = 1000; - search backwards, searcb for C before when B appears
 if C == B, then it's a direct flight!!!!
 */
/*
#include <iostream>
using namespace std;
int AtoC[10001], CtoB[10001], city[5000];
int main() {
    int a, b, n;
    cin >> a >> b >> n;
    for(int i = 0; i <= 10000; i++) {
        AtoC[i] = 2000;
        CtoB[i] = 2000;
    }
    for(int i = 0; i < n; i++) {
        int cost, nums, inda = 505, indb = -1;
        cin >> cost >> nums;
        for(int j = 0; j < nums; j++) {
            cin >> city[j];
            if(city[j] == a) inda = j;
            if(city[j] == b) indb = j;
        }
        for(int j = inda; j < nums; j++) {
            if(AtoC[city[j]] > cost) AtoC[city[j]] = cost;
        }
        for(int j = indb; j >= 0; j--) {
            if(CtoB[city[j]] > cost) CtoB[city[j]] = cost;
            if(AtoC[city[j]] == CtoB[city[j]]) CtoB[city[j]] = 0;
        }
    }
    int mincost = 2500;
    for(int i = 1; i <= 10000; i++) {
        if(mincost > AtoC[i] + CtoB[i]) mincost = AtoC[i] + CtoB[i];
    }
    if(mincost == 2500) cout << -1 << endl;
    else cout << mincost << endl;
}
*/
