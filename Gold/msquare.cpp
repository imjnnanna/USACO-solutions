/*
#include <iostream>
#include <queue>
#include <string>
#include <cstring>
#include <set>
#include <algorithm>
using namespace std;
struct square {
    int arr[8];
    string s;
};
set<string> vis;
string minstring = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
bool correct(int a[]) {
    for(int i = 0; i < 8; i++) {
        if(a[i] != i + 1) return false;
    }
    return true;
}
square temp;
void bfs(int box[8], string moves) {
    queue<square> q;
    for(int i = 0; i < 8; i++) temp.arr[i] = box[i];
    temp.s = moves;
    q.push(temp);
    while(!q.empty()) {
        vis.insert(moves);
        square f = q.front();
        q.pop();
        for(int i = 0; i < 8; i++) box[i] = f.arr[i];
        moves = f.s;
        if(correct(box)) {
            minstring = min(minstring, moves);
            continue;
        }
        if(vis.count(moves + "A") == 0) {
            swap(box[0], box[4]);
            swap(box[1], box[5]);
            swap(box[2], box[6]);
            swap(box[3], box[7]);
            for(int i = 0; i < 8; i++) temp.arr[i] = box[i];
            temp.s = moves + "A";
            q.push(temp);
        }
        if(vis.count(moves + "B") == 0) {
            swap(box[0], box[1]);
            swap(box[0], box[2]);
            swap(box[0], box[3]);
            swap(box[4], box[5]);
            swap(box[4], box[6]);
            swap(box[4], box[7]);
            for(int i = 0; i < 8; i++) temp.arr[i] = box[i];
            temp.s = moves + "B";
            q.push(temp);
        }
        if(vis.count(moves + "C") == 0) {
            swap(box[1], box[6]);
            swap(box[2], box[6]);
            swap(box[5], box[6]);
            for(int i = 0; i < 8; i++) temp.arr[i] = box[i];
            temp.s = moves + "C";
            q.push(temp);
        }
    }
}
int main() {
    int arr[8];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5] >> arr[6] >> arr[7];
    bfs(arr, "");
    cout << minstring << endl;
}
*/
