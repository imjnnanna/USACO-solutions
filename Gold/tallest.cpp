/*
#include <iostream>
#include <algorithm>
using namespace std;
struct cow {
    int a, b;
};
bool comp(cow x, cow y) {
    if(x.a != y.a) return(x.a < y.a);
    else return(x.b < y.b);
}
int main() {
    int n, i, h, r, a, b;
    cin >> n >> i >> h >> r; // n = number of cows total; i = index of tallest cow; h = height of tallest cow; r = number of input lines
    cow see[r];
    int heights[n + 5];
    for(int i = 1; i <= n; i++) heights[i] = h;
    for(int i = 1; i <= r; i++) {
        cin >> a >> b;
        if(a < b) {
            see[i].a = a;
            see[i].b = b;
        } else {
            see[i].a = b;
            see[i].b = a;
        }
    }
    sort(see + 1, see + r + 1, comp);
    for(int i = 1; i < r; i++) {
        if(see[i].a == see[i + 1].a && see[i].b == see[i + 1].b) {
            see[i].a = 0;
            see[i].b = 0;
        }
    }
    for(int i = 1; i <= r; i++) {
        if(see[i].b - see[i].a <= 1) continue;
        for(int j = see[i].a + 1; j < see[i].b; j++) {
            heights[j]--;
        }
    }
    for(int i = 1; i <= n; i++) {
        cout << heights[i] << endl;
    }
}
*/
