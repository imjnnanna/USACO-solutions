/*
#include <iostream>
using namespace std;
int n, wordorder[105];
char key[27];
string word[105], temp[105];
bool edge[27][27]; // edge[i][j] = true if i comes before j
void dfs(int ind) {
    if(ind == numofletters) {
        for(int i = 0; i < numofletters; i++) cout << arr[i];
        cout << endl;
        return;
    }
    for(int i = 0; i <= 36; i++) {
        if(!vis[i] || above[i] > 0) continue;
        vis[i] = false;
        arr[ind] = 'A' + i;
        for(int j = 0; j <= 36; j++) {
            if(edge[i][j]) above[j]--;
        }
        dfs(ind + 1);
        vis[i] = true;
        for(int j = 0; j <= 36; j++) {
            if(edge[i][j]) above[j]++;
        }
    }
}
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> temp[i];
    for(int i = 1; i <= n; i++) cin >> wordorder[i];
    for(int i = 1; i <= n; i++) word[i] = temp[wordorder[i]];
    for(int i = 1; i < n; i++) { // comparing word[i] to word[i + 1]
        // go through each letter.
        for(int j = 0; j < min(word[i].length(), word[i + 1].length()); j++) {
            if(word[i][j] != word[i + 1][j]) {
                cout << word[i][j] << " " << word[i + 1][j] << endl;
                edge[word[i][j] - 'a'][word[i + 1][j] - 'a'] = true; // word[i][j] - 'a' comes before word[i + 1][j] - 'a']
                break;
            }
        }
    }
    dfs(0);
}
*/
