/*
#include <fstream>
using namespace std;
int prefix[100005][4];
int main() {
    ifstream fin("bcount.in");
    ofstream fout("bcount.out");
    int n, q, a, start, end;
    fin >> n >> q;
    for(int i = 1; i <= n; i++) {
        fin >> a;
        prefix[i][1] = prefix[i - 1][1];
        prefix[i][2] = prefix[i - 1][2];
        prefix[i][3] = prefix[i - 1][3];
        prefix[i][a]++;
    }
    for(int i = 0; i < q; i++) {
        fin >> start >> end;
        fout << prefix[end][1] - prefix[start - 1][1] << " " << prefix[end][2] - prefix[start - 1][2] << " " << prefix[end][3] - prefix[start - 1][3] << endl;
    }
}
*/
