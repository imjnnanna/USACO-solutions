/*
#include <iostream>
#include <algorithm>
using namespace std;
char in[26];
int l, c;
char pass[26];
void gen(int len, int start) {
    if (len == l) {
        int consonant = 0;
        int vowel = 0;
        for (int i = 0; i < l; i++) {
            if (pass[i] == 'a' || pass[i] == 'e' || pass[i] == 'i' || pass[i] == 'o' || pass[i] == 'u') vowel++;
            else consonant++;
        }
        if(vowel >= 1 && consonant >= 2) cout << pass << endl;
        return;
    }
    if (start >= c) return;
    for (int i = start; i < c; i++) {
        pass[len] = in[i];
        gen(len + 1, i + 1);
    }
}
int main () {
    cin >> l >> c;
    for (int i = 0; i < c; i++) {
        cin >> in[i];
    }
    sort(in, in + c);
    gen(0, 0);
}
*/
