///*
// ID: imjnnan1
// LANG: C++
// TASK: namenum
// */
//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//string s, names[531442], dict[5000];
//int nameind = 0;
//void dfs(string a, int ind) {
//    if(ind >= (int)s.length()) {
//        names[nameind] = a;
//        nameind++;
//    } else {
//        if(s[ind] == '2') {
//            dfs(a + 'A', ind + 1);
//            dfs(a + 'B', ind + 1);
//            dfs(a + 'C', ind + 1);
//        } else if(s[ind] == '3') {
//            dfs(a + 'D', ind + 1);
//            dfs(a + 'E', ind + 1);
//            dfs(a + 'F', ind + 1);
//        } else if(s[ind] == '4') {
//            dfs(a + 'G', ind + 1);
//            dfs(a + 'H', ind + 1);
//            dfs(a + 'I', ind + 1);
//        } else if(s[ind] == '5') {
//            dfs(a + 'J', ind + 1);
//            dfs(a + 'K', ind + 1);
//            dfs(a + 'L', ind + 1);
//        } else if(s[ind] == '6') {
//            dfs(a + 'M', ind + 1);
//            dfs(a + 'N', ind + 1);
//            dfs(a + 'O', ind + 1);
//        } else if(s[ind] == '7') {
//            dfs(a + 'P', ind + 1);
//            dfs(a + 'R', ind + 1);
//            dfs(a + 'S', ind + 1);
//        } else if(s[ind] == '8') {
//            dfs(a + 'T', ind + 1);
//            dfs(a + 'U', ind + 1);
//            dfs(a + 'V', ind + 1);
//        } else {
//            dfs(a + 'W', ind + 1);
//            dfs(a + 'X', ind + 1);
//            dfs(a + 'Y', ind + 1);
//        }
//    }
//} // stores all possible (3^s) names in alphabetical order
//int main() {
//    ifstream fin2("dict.txt");
//    ifstream fin("namenum.in");
//    ofstream fout("namenum.out");
//    fin >> s;
//    dfs("", 0);
//    for(int i = 0; i < 4617; i++) fin2 >> dict[i];
//    int count = 0;
//    bool there = false;
//    for(int i = 0; i < 4617; i++) {
//        while(dict[i] > names[count] && count < nameind) count++;
//        if(count >= nameind) break;
//        if(names[count] == dict[i]) {
//            fout << names[count] << endl;
//            there = true;
//        }
//    }
//    if(!there) fout << "NONE" << endl;
//    return 0;
//}
