/*
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int arr[5][20005], n, sorted[20005];
map<int, int> ind[5];
bool comp(int a, int b) {
    int count = 0;
    for(int i = 0; i < 5; i++) {
        if(ind[i].find(a)->second < ind[i].find(b)->second) count++;
    }
    if(count >= 3) return true;
    else return false;
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[0][i];
        sorted[i] = arr[0][i];
        ind[0][arr[0][i]] = i;
    }
    for(int i = 0; i < n; i++) {
        cin >> arr[1][i];
        ind[1][arr[1][i]] = i;
    }
    for(int i = 0; i < n; i++) {
        cin >> arr[2][i];
        ind[2][arr[2][i]] = i;
    }
    for(int i = 0; i < n; i++) {
        cin >> arr[3][i];
        ind[3][arr[3][i]] = i;
    }
    for(int i = 0; i < n; i++) {
        cin >> arr[4][i];
        ind[4][arr[4][i]] = i;
    }
    sort(sorted, sorted + n, comp);
    for(int i = 0; i < n; i++) cout << sorted[i] << endl;
}
*/
 /*
 This problem asks us to simulate Bessie tracing the barn clockwise until she knows where she is.
 One way to think about this is to abstract away the polygon aspect of the problem
 and instead treat the angles and side lengths as a string.
 Now we need to help Bessie explore a string instead.
 Therefore we want try, for each starting position, extending the string until we get a unique substring.
 
 It's efficient enough to simply use a set structure to test for uniqueness of a substring.
 To make it faster one could use hashes or suffix arrays instead.
 
 
 Finding the distance in the lit (optimal) case is easy - count the edge lengths around the polygon.
 We can imagine this as a string matching problem.
 The barn, viewed clockwise, may be 6R3L2R3R8R6R, where L/R represent corners and numbers are sidelengths.
 Bessie recognizes where she is once the substring she has traversed appears nowhere else in the string.
 To find how far Bessie travels before finding her location,
 find the longest match elsewhere in the string with the substring starting at each vertex.
 */
