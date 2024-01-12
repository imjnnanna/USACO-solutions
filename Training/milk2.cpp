/*
 ID: imjnnan1
 LANG: C++
 TASK: milk2
 */
/*
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<int, bool>> cow; // time, (true == start) (false == end)
int main() {
    ifstream fin("milk2.in");
    ofstream fout("milk2.out");
    int n;
    fin >> n;
    int x, y;
    for(int i = 0; i < n; i++) {
        fin >> x >> y;
        cow.push_back(make_pair(x, true));
        cow.push_back(make_pair(y, false));
    }
    sort(cow.begin(), cow.begin() + 2 * n);
    int count = 1;
    for(int i = 1; i < 2 * n; i++) {
        if(cow[count].first == cow[count - 1].first && cow[count].second != cow[count - 1].second) {
            cow.erase(cow.begin() + count);
            cow.erase(cow.begin() + count - 1);
            count--;
        } else count++;
    }
    int milk = 0, idle = 0, maxmilk = -1, maxidle = -1;
    int milking = 1;
    for(int i = 1; i < cow.size(); i++) {
        if(!milking) {
            milk = 0;
            idle += cow[i].first - cow[i - 1].first;
        } else {
            idle = 0;
            milk += cow[i].first - cow[i - 1].first;
        }
        if(cow[i].second) milking++;
        else milking--;
        maxmilk = max(milk, maxmilk);
        maxidle = max(idle, maxidle);
    }
    fout << maxmilk << " " << maxidle << endl;
}
*/
