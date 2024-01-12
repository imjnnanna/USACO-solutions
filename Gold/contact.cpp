/*
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;
typedef long long LL;
const int maxn = 85;
int cnt[14][(1 << 12) + 10];
string s;
char tmp[maxn];
struct node {
    int num, len, x;
    bool operator < (const node& rhs) const {
        if (num != rhs.num) {
            return num > rhs.num;
        }
        return len < rhs.len || (len == rhs.len && x < rhs.x);
    }
    void print() {
        char s[14];
        int x = this -> x;
        s[len] = 0;
        for (int i = 0; i < len; ++i) {
            s[len - i - 1] = (x & 1) ? '1' : '0';
            x >>= 1;
        }
        printf("%s", s);
    }
} a[50010];
int main() {
    freopen("contact.in", "r", stdin);
    freopen("contact.out", "w", stdout);
    int A, B, n;
    scanf("%d%d%d", &A, &B, &n);
    while (~scanf("%s", tmp)) {
        s += tmp;
    }
    for (int i = 0; i < int(s.length()); ++i) {
        int x = 0;
        for (int j = 0; j < B && i + j < int(s.length()); ++j) {
            x <<= 1;
            if (s[i + j] == '1') {
                ++x;
            }
            ++cnt[j + 1][x];
        }
    }
    int num = 0;
    for (int i = A; i <= B; ++i) {
        int ub = 1 << i;
        for (int j = 0; j < ub; ++j) {
            if (cnt[i][j] > 0) {
                a[num].num = cnt[i][j];
                a[num].len = i;
                a[num].x = j;
                ++num;
            }
        }
    }
    sort(a, a + num);
    int p = 0;
    while (n-- && p < num) {
        int x = a[p].num, y = 0;
        printf("%d\n", x);
        bool flag = true;
        while (p < num && a[p].num == x) {
            if (flag) {
                flag = false;
            } else {
                putchar(' ');
            }
            a[p].print();
            if (++y == 6) {
                y = 0;
                puts("");
                flag = true;
            }
            ++p;
        }
        if (y) {
            puts("");
        }
    }
    return 0;
}
*/
