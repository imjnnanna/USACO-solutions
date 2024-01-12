/*
#include <iostream>
using namespace std;
int dp[10][10][10][10][10], special[1005], purchase[10], price[205], product[205][10];
int main() {
    int specialoffers, numpurch, ncode = 0, productcode, k, n;
    cin >> specialoffers;
    for(int i = 0; i < specialoffers; i++) {
        cin >> n;
        for(int j = 0; j < n; j++) {
            cin >> productcode;
            cin >> k;
            if(special[productcode] == 0) {
                special[productcode] = ncode + 1;
                ncode++;
            }
            product[i][special[productcode]] = k;
        }
        cin >> price[i];
    }
    cin >> numpurch;
    for(int i = 0; i < numpurch; i++) {
        cin >> productcode;
        if(special[productcode] == 0) {
            special[productcode] = ncode + 1;
            ncode++;
        }
        k = special[productcode];
        cin >> purchase[k];
        cin >> price[specialoffers + i];
        product[specialoffers + i][k] = 1;
    }
    for(int a = 0; a < 6; a++) for(int b = 0; b < 6; b++) for(int c = 0; c < 6; c++) for(int d = 0; d < 6; d++) for(int e = 0; e < 6; e++) dp[a][b][c][d][e] = 1000000000;
    dp[0][0][0][0][0] = 0;
    for(int i = 0;i < numpurch + specialoffers; i++) {
        int A = product[i][1], B = product[i][2], C = product[i][3], D = product[i][4], E = product[i][5];
        for(int a = 0; a + A <= purchase[1]; a++) for(int b = 0; b + B <= purchase[2]; b++) for(int c = 0; c + C <= purchase[3]; c++) for(int d = 0; d + D <= purchase[4]; d++) for(int e = 0; e + E <= purchase[5]; e++) {
            dp[a + A][b + B][c + C][d + D][e + E] = min(dp[a + A][b + B][c + C][d + D][e + E], dp[a][b][c][d][e] + price[i]);
        }
    }
    cout << dp[purchase[1]][purchase[2]][purchase[3]][purchase[4]][purchase[5]] << endl;
}
*/
