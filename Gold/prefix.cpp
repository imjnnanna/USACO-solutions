/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> primitive;
bool oolala[200005];
int psize;
int main() {
    string a;
    while(true) {
        cin >> a;
        if(a == ".") break;
        primitive.push_back(a);
    }
    psize = primitive.size();
    string seq = "";
    while(cin >> a) seq += a;
    for(int i = 0; i < psize; i++) { // primitive[i]
        for(int j = 0; j < seq.size() - primitive[i].size(); j++) { // seq[j]
            bool eq = true;
            for(int k = 0; k < primitive[i].size(); k++) { // primitive[i][k]
                if(seq[j + k] != primitive[i][k]) eq = false;
            }
            if(eq == true) {
                for(int k = j; k < j + primitive[i].size(); k++) oolala[k] = true;
                j += primitive[i].size() - 1;
            }
        }
    }
    int i;
    for(i = 0; i < seq.size(); i++) {
        if(!oolala[i]) break;
    }
    if((i + 1) % 1000 == 0) cout << i + 1 << endl;
    else cout << i << endl;
}
*/
