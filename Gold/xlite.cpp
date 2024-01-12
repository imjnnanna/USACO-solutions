/*
#include <iostream>
#include <string>
using namespace std;
int l, t, ans, realans;
unsigned long long lights = 0, pitchfork = 0;
int bitcount(unsigned long long n) {
    int count = 0;
    while(n > 0) {
        count++;
        n = n & (n - 1);
    }
    return count;
}
void dfs(int ind, unsigned long long s, int lightson, int lightstoggled) {
    if(lightson > ans) return;
    if(ind > l - t) {
        lightson = bitcount(s);
        if(lightson < ans) {
            ans = lightson;
            realans = lightstoggled;
        } else if(lightson == ans && lightstoggled < realans) realans = lightstoggled;
        return;
    }
    //cout << "ind = " << ind << ", s = " << s << ", lightson = " << lightson << ", lightstoggled = " << lightstoggled << endl;
    int add = 0;
    if((s & (1L << ind)) > 0) add = 1;
    dfs(ind + 1, s, lightson + add, lightstoggled);
    add = 1 - add;
    s ^= (pitchfork << ind);
    dfs(ind + 1, s, lightson + add, lightstoggled + 1);
}
int main() {
    cin >> l >> t;
    realans = 1000000000;
    string a, b;
    cin >> a >> b;
    while(b[0] == '0') {
        a.erase(0, 1);
        b.erase(0, 1);
        l--;
        t--;
    }
    while(b[t - 1] == '0') {
        a.pop_back();
        b.pop_back();
        l--;
        t--;
    }
    ans = t - 1;
    for(int i = 0; i < l; i++) {
        if(a[i] == '1') lights += 1L << i;
    }
    for(int i = 0; i < t; i++) {
        if(b[i] == '1') pitchfork += 1L << i;
    }
    dfs(0, lights, 0, 0);
    cout << realans << endl;
}
*/
