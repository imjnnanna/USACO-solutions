/*
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int mother, brand, reverse = 0, count = 0, sum = 0, sumreverse = 1, a, steps = 0;
    cin >> mother;
    while(sum != sumreverse) {
        brand = mother;
        while(mother > 0) {
            mother /= 10;
            count++;
        }
        mother = brand;
        if(steps == 0) {
            while(mother > 0) {
                reverse += pow(10, count - 1) * (mother % 10);
                mother /= 10;
                count--;
            }
        } else {
            mother = sum;
            reverse = sumreverse;
        }
        sum = brand + reverse;
        a = sum;
        count = 0;
        sumreverse = 0;
        while(a > 0) {
            a /= 10;
            count++;
        }
        a = sum;
        while(a > 0) {
            sumreverse += pow(10, count - 1) * (a % 10);
            a /= 10;
            count--;
        }
        count = 0;
        steps++;
        mother = sum;
    }
    cout << steps << " " << sum << endl;
}
*/
