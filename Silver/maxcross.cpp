/*
#include <fstream>
using namespace std;
bool street[100005];
int prefixsum[100005];
int main() {
    ifstream fin("maxcross.in");
    ofstream fout("maxcross.out");
    int n, k, b, a;
    fin >> n >> k >> b;
    for(int i = 1; i <= n; i++) {
        fin >> a;
        street[a] = true;
    }
    for(int i = 1; i <= n; i++) {
        prefixsum[i] = prefixsum[i - 1] + street[i];
    }
    int ans = 1000000;
    for(int i = 1; i + k - 1 <= n; i++) {
        if(k - prefixsum[i + k - 1] - prefixsum[i - 1] < ans) ans = k - prefixsum[i + k - 1] - prefixsum[i - 1];
    }
    fout << ans << endl;
}
*/
