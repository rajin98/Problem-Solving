// URL: https://open.kattis.com/problems/10kindsofpeople

#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> Point;
Point current, dest, start;
vector<Point>::iterator it, nit;

string result(int x){
    return (x == 0) ? "binary" : "decimal";
}

vector<Point> adjList(Point p, int r, int c){
    vector<Point> retval;
    if(p.first > 0) retval.push_back(make_pair(p.first - 1, p.second));
    if(p.first + 1 < r) retval.push_back(make_pair(p.first + 1, p.second));
    if(p.second > 0) retval.push_back(make_pair(p.first, p.second - 1));
    if(p.second + 1 < c) retval.push_back(make_pair(p.first, p.second + 1));
    return retval;
}

int main () {
    int r, c, i, j, n;
    cin >> r >> c;
    int grid[r][c];
    for(i=0;i<r;i++){
        string inp; cin >> inp;
        for(j=0;j<c;j++) grid[i][j] = inp[j] - '0';
    }

    vector<pair<int, vector<Point>>> memList;
    cin >> n;
    while(n--){
        int s[2], e[2];
        cin >> s[0] >> s[1] >> e[0] >> e[1];
        start = make_pair(s[0]-1, s[1]-1); dest = make_pair(e[0]-1, e[1]-1);
        if(grid[start.first][start.second] != grid[dest.first][dest.second]) {
            cout << "neither" << endl;
            continue;
        }
        if(start == dest){
            cout << result(grid[dest.first][dest.second]) << endl;
            continue;
        }

        int pathKey = grid[start.first][start.second];

        bool inMem = false;
        for(i = 0; i < memList.size() && !inMem; i++){
            if(memList[i].first == pathKey){
                bool hasStart = false, hasEnd = false;
                for(j = 0; j < memList[i].second.size(); j++){
                    if(memList[i].second[j] == start)hasStart = true;
                    if(memList[i].second[j] == dest) hasEnd = true;
                }
                if(hasStart && hasEnd){cout << result(pathKey) << endl; inMem = true;}
            }
        }
        if(inMem) continue;

        vector<Point> openSet, nb, memSet;
        Point current = start;
        openSet.push_back(current); memSet.push_back(current);
        bool visited[r+1][c] = {0};
        bool found = false;

        while(!openSet.empty()){
            visited[current.first+1][current.second] = true;
            current = openSet.back(); openSet.pop_back();
            if(current == dest) found = true;
            nb = adjList(current, r, c);
            for(nit = nb.begin(); nit !=nb.end();++nit) {
                Point a = *nit;
                if(grid[a.first][a.second] == pathKey && !visited[a.first+1][a.second]) {openSet.push_back(a); memSet.push_back(a);}
            }
        }
        memList.push_back(make_pair(pathKey, memSet));
        if(!found) cout << "neither" << endl;
        else cout << result(pathKey) << endl;
    }
}
