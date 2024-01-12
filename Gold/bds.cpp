/*
#include <iostream>
#include <algorithm>
using namespace std;
int n, sum, nums[11];
bool triangle() {
    if(n == 1) {
        return(sum == nums[1]);
    } else if(n == 2) {
        return(sum == nums[1] + nums[2]);
    } else if(n == 3) {
        return(sum == nums[1] + 2 * nums[2] + nums[3]);
    } else if(n == 4) {
        return(sum == nums[1] + 3 * nums[2] + 3 * nums[3] + nums[4]);
    } else if(n == 5) {
        return(sum == nums[1] + 4 * nums[2] + 6 * nums[3] + 4 * nums[4] + nums[5]);
    } else if(n == 6) {
        return(sum == nums[1] + 5 * nums[2] + 10 * nums[3] + 10 * nums[4] + 5 * nums[5] + nums[6]);
    } else if(n == 7) {
        return(sum == nums[1] + 6 * nums[2] + 15 * nums[3] + 20 * nums[4] + 15 * nums[5] + 6 * nums[6] + nums[7]);
    } else if(n == 8) {
        return(sum == nums[1] + 7 * nums[2] + 21 * nums[3] + 35 * nums[4] + 35 * nums[5] + 21 * nums[6] + 7 * nums[7] + nums[8]);
    } else if(n == 9) {
        return(sum == nums[1] + 8 * nums[2] + 28 * nums[3] + 56 * nums[4] + 70 * nums[5] + 56 * nums[6] + 28 * nums[7] + 8 * nums[8] + nums[9]);
    } else {
        return(sum == nums[1] + 9 * nums[2] + 36 * nums[3] + 84 * nums[4] + 126 * nums[5] + 126 * nums[6] + 84 * nums[7] + 36 * nums[8] + 9 * nums[9] + nums[10]);
    }
    return false;
}
int main () {
    cin >> n >> sum;
    for(int i = 1; i <= n; i++) nums[i] = i;
    do {
        if(triangle()) {
            for(int i = 1; i <= n; i++) cout << nums[i] << " ";
            break;
        }
    } while (next_permutation(nums, nums + n));
}
 */
/*
 For problem 1 (Backward Digit Sums),
 we have to find the first row from N and the last row.
 Since N is small, we can try all possible combinations of the first row.
 One way to implement this is recursion.
 If you are using C++, you should use next permutation to implement this
 as the code is a lot shorter than recursion. We now have to quickly check if a starting row works.
 Creating the whole triangle is too slow. Consider the triangle with N=4 that starts with A, B, C, and D.
 
 A                       B                                C                                D
 
 A+B                       B+C                         C+D
 
 A+2*B+C                  B+2*C+D
 
 A + 3*B + 3*C + D
 
 Notice that the coefficients are the same as the values in Pascal's triangle.
 We can precompute the coefficients.
 Since we now know what the coefficients will be,
 we don't need to create the whole triangle to figure out if the bottom value is correct;
 we can calculate it linearly from the precomputed coefficients.
 
 1
 1 1
 1 2 1
 1 3 3 1
 1 4 6 4 1
 1 5 10 10 5 1
 1 6 15 20 15 6 1
 1 7 21 35 35 21 7 1
 1 8 28 51 51 28 8 1
 1 9 36 79 102 79 36 9 1
 
 1
 1     1
 1     2     1
 1     3     3     1
 1     4     6     4     1
 1     5    10    10     5     1
 1     6    15    20    15     6     1
 1     7    21    35    35    21     7     1
 1     8    28    56    70    56    28     8     1
 1     9    36    84   126   126    84    36     9     1
 */
