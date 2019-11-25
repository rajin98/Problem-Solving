// URL: https://open.kattis.com/problems/epigdanceoff

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string lines[n];
    for(int i = 0; i < n; i++)cin >> lines[i];
    int rate = 1;
    for(int c = 0; c < m; c++){
        bool frame = false;
        for(int r = 0; r < n; r++){
            if(lines[r][c] == '$'){
                frame = true; break;
            }
        }
        if(!frame) rate++;
    }
    cout << rate;
}
