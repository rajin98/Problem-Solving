// URL: https://open.kattis.com/problems/loowater

#include <bits/stdc++.h>

using namespace std;

int main() {
    while(1){
        int n, m, i, it=0, tot=0;
        bool doomed = false;
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        int nh[n], mh[m];
        for(i=0; i < n; i++) cin >> nh[i];
        for(i=0; i < m; i++) cin >> mh[i];
        if(m<n) doomed = true;
        else{
            sort(mh, mh+m); sort(nh, nh+n);
            for(i = 0; i < n; i++){
                while(!(mh[it] >= nh[i]) && it < m) it++;
                if(it==m) {doomed = true; break;}
                else tot += mh[it];
                it++;
            }
        }
        if(!doomed) cout << tot <<endl;
        else cout << "Loowater is doomed!" <<endl;
    }
}

