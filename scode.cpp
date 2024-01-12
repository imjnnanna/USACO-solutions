/*
#include <iostream>
using namespace std;
int ways(string s) {
    int l = s.length(), ans = 1;
    if(l == 1 || l % 2 == 0) return 1;
    // ABC -> AB + ABC -> AB AB C
    if(s.substr(0, l / 2) == s.substr(l / 2, l / 2)) {
        ans += ways(s.substr(l / 2, l / 2 + 1));
    }
    // ABC -> ABC + AB -> AB C AB
    if(s.substr(0, l / 2) == s.substr(l / 2 + 1, l / 2)) {
        ans += ways(s.substr(0, l / 2 + 1));
    }
    // ABC -> BC + ABC -> BC A BC
    if(s.substr(0, l / 2) == s.substr(l / 2 + 1, l / 2)) {
        ans += ways(s.substr(l / 2, l / 2 + 1));
    }
    // ABC -> ABC + BC -> A BC BC
    if(s.substr(1, l / 2) == s.substr(l / 2 + 1, l / 2)) {
        ans += ways(s.substr(0, l / 2 + 1));
    }
    return ans;
}
int main() {
    string code;
    cin >> code;
    cout << ways(code) - 1 << endl;
}
*/
