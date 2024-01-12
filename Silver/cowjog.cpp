/*
// WITHOUT TIME LIMIT
#include <iostream>
using namespace std;
struct cow {
    int pos, speed;
};
cow arr[100005];
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i].pos >> arr[i].speed;
    int min = arr[n - 1].speed;
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i].speed > min) arr[i].speed = 0;
        else min = arr[i].speed;
    }
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i].speed != 0) count++;
    }
    cout << count << endl;
}
*/
// WITH TIME LIMIT
/*
#include <iostream>
using namespace std;
long long pos[100005];
int main() {
    long long n, t;
    cin >> n >> t;
    long long p, s;
    for(long long i = 0; i < n; i++) {
        cin >> p >> s;
        pos[i] = p + t * s;
    }
    long long count = 1;
    long long minpos = pos[n - 1];
    for(long long i = n - 2; i >= 0; i--) {
        if(pos[i] < pos[i + 1]) {
            count++;
            minpos = pos[i];
        } else {
            pos[i] = minpos;
        }
    }
    cout << count << endl;
}
*/
