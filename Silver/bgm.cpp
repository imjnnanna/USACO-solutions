/*
#include <iostream>
#include <cstdio>
using namespace std;
long long arr[256][7];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char letter;
        int val;
        cin >> letter >> val;
        arr[letter][(val % 7 + 7) % 7]++;
    }
    long long result = 0;
    for(int B = 0; B < 7; B++) {
        for(int E = 0; E < 7; E++) {
            for(int S = 0; S < 7; S++) {
                for(int I = 0; I < 7; I++) {
                    for(int G = 0; G < 7; G++) {
                        for(int O = 0; O < 7; O++) {
                            for(int M = 0; M < 7; M++) {
                                if (((B + E + S + S + I + E) * (G + O + E + S) * (M + O + O)) % 7 == 0) {
                                    result += arr['B'][B] * arr['E'][E] * arr['S'][S] * arr['I'][I] * arr['G'][G] * arr['O'][O] * arr['M'][M];
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << result << endl;
}
*/
