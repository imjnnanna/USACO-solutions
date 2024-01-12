/*
#include <iostream>
using namespace std;
int main() {
    string grass;
    cin >> grass;
    int leftcount = 0, rightcount = 0;
    for(int i = 0; i < grass.size() - 1; i++) {
        if(grass[i] == '(' && grass[i + 1] == '(') leftcount++;
        if(grass[i] == ')' && grass[i + 1] == ')' && leftcount > 0) rightcount += leftcount;
    }
    cout << rightcount << endl;
}
/*
 Sample input: )((()())())
 Sample output: 4
 
 Sample input: ((((((()(())(()()))))(()(()(())))()()))()))()(()()
 Sample output: 116
 
 Go through, look for left, right;
 Leftcount, rightcount;
 if hit left - add that to leftcount.
 if hit right - if left ≥ 1, then add leftcount to rightcount;
 multiply leftcount * rightcount
 */
