// URL: https://open.kattis.com/problems/ovalwatch

#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> PT;

int binaryIndex(vector<PT> &cords, int height, int cur){
    int l = 0, r = cords.size(), index; bool eq = false, found = false;
    while (l < r) {
        int m = l + (r - l) / 2;
        if (cords[m].first == height+1){
            index = m; eq = true; break;
        }
        if (cords[m].first < height+1) l = m + 1;
        else r = m;
    }
    if(!eq) index = l;
    for(int x = index; x < cords.size(); x++){
        int line = cords[x].second;
        if(line == cur || line + 1 == cur){
            index = x; found = true; break;
        }
    }
    if(found) return index;
    else return cords.size()-1;
}

int main() {
    int n, k, i, l, h;
    cin >> n >> k;
    vector<PT> cords;
    for(i = 0; i < k; i++) {
        scanf("%d%d", &h, &l);
        cords.push_back(make_pair(l,h));
    }
    sort(cords.begin(), cords.end());

    for(i = 0; i < n; i++){
        int cur = i, height = 0, maxH = cords[k-1].first, index, line;

        while(height < maxH){
            index = binaryIndex(cords, height, cur), line = cords[index].second;
            height = cords[index].first;
            if(line == cur) cur++;
            else if(line + 1 == cur) cur--;
        }
        printf("%d ", cur);
    }
}
