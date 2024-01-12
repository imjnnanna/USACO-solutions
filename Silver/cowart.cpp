/*
#include <iostream>
using namespace std;
int n, m;
char human[105][105], cow[105][105];
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};


bool legalhumanR(int a, int b) {
    if(a < n && b < m && a >= 0 && b >= 0) {
        if(human[a][b] == 'R') {
            return true;
        }
    }
    return false;
}
bool legalhumanG(int a, int b) {
    if(a < n && b < m && a >= 0 && b >= 0) {
        if(human[a][b] == 'G') {
            return true;
        }
    }
    return false;
}
bool legalhumanB(int a, int b) {
    if(a < n && b < m && a >= 0 && b >= 0) {
        if(human[a][b] == 'B') {
            return true;
        }
    }
    return false;
}



bool legalcowRG(int a, int b) {
    if(a < n && b < m && a >= 0 && b >= 0) {
        if(cow[a][b] == 'R' || cow[a][b] == 'G') {
            return true;
        }
    }
    return false;
}
bool legalcowB(int a, int b) {
    if(a < n && b < m && a >= 0 && b >= 0) {
        if(cow[a][b] == 'B') {
            return true;
        }
    }
    return false;
}



void fillhumanR(int r, int c) {
    for(int i = 0; i < 4; i++) {
        int nc = c + dc[i];
        int nr = r + dr[i];
        if(legalhumanR(nr, nc)) {
            human[nr][nc] = '.';
            fillhumanR(nr, nc);
        }
    }
}


void fillhumanG(int r, int c) {
    for(int i = 0; i < 4; i++) {
        int nc = c + dc[i];
        int nr = r + dr[i];
        if(legalhumanG(nr, nc)) {
            human[nr][nc] = '.';
            fillhumanG(nr, nc);
        }
    }
}


void fillhumanB(int r, int c) {
    for(int i = 0; i < 4; i++) {
        int nc = c + dc[i];
        int nr = r + dr[i];
        if(legalhumanB(nr, nc)) {
            human[nr][nc] = '.';
            fillhumanB(nr, nc);
        }
    }
}









void fillcowRG(int r, int c) {
    for(int i = 0; i < 4; i++) {
        int nc = c + dc[i];
        int nr = r + dr[i];
        if(legalcowRG(nr, nc)) {
            cow[nr][nc] = '.';
            fillcowRG(nr, nc);
        }
    }
}


void fillcowB(int r, int c) {
    for(int i = 0; i < 4; i++) {
        int nc = c + dc[i];
        int nr = r + dr[i];
        if(legalcowB(nr, nc)) {
            cow[nr][nc] = '.';
            fillcowB(nr, nc);
        }
    }
}



int main() {
    int counthuman = 0, countcow = 0;
    cin >> n;
    m = n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> human[i][j];
            cow[i][j] = human[i][j];
        }
    }
    
    
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(human[i][j] == 'R') {
                human[i][j] = '.';
                fillhumanR(i, j);
                counthuman++;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(human[i][j] == 'G') {
                human[i][j] = '.';
                fillhumanG(i, j);
                counthuman++;
            }
        }
    }
    
    
    
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(human[i][j] == 'B') {
                human[i][j] = '.';
                fillhumanB(i, j);
                counthuman++;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(cow[i][j] == 'R' || cow[i][j] == 'G') {
                cow[i][j] = '.';
                fillcowRG(i, j);
                countcow++;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(cow[i][j] == 'B') {
                cow[i][j] = '.';
                fillcowB(i, j);
                countcow++;
            }
        }
    }
    cout << counthuman << " " << countcow << endl;
}
*/
