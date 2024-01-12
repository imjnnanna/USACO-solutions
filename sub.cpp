/*
 #include <iostream>
 using namespace std;
 int main() {
    int l1, l2, a, max = 0;
    cin >> l1 >> l2;
    int one[l1], two[l2];
    for(int i = 0; i < l1; i++) {
        cin >> a;
        one[i] = a;
    }
    for(int i = 0; i < l2; i++) {
        cin >> a;
        two[i] = a;
    }
    for(int i = 0; i < l1; i++) {
        for(int j = 0; j < l2; j++) {
            for(int k = 0; k < 180; k++) {
                if(i + k > l1 || j + k > l2) {
                    break;
                }
                if(one[i + k] != two[j + k]) {
                    if(max < k) max = k;
                    break;
                }
            }
        }
    }
    cout << max << endl;
 }
*/
