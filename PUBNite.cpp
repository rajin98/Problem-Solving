// URL: https://open.kattis.com/problems/pubnite

#include <bits/stdc++.h>

using namespace std;
long xc, yc, sc, ri, rf, xp, yp, sp, d;

int main () {
    cout << fixed << setprecision(9);
    cin >> xc >> yc >> sc >> ri >> rf >> xp >> yp >> sp;
    d = sqrt((xp-xc)*(xp-xc)+(yp-yc)*(yp-yc));
    if(d <= rf || (d <= ri && sp >= sc)) cout << 0.0; //solid
    else if(d < ri){
        double dt = (ri - d)/(double)(sc - sp), ft = (d - rf)/(double) sp;
        (ft < dt) ? cout << (double) ft : cout << (double) ft - dt;
    }
    else if(sp <= sc){
        cout << (d - rf) / (double) sp;
    }
    else {
        double dt = (d - ri)/(double)(sp-sc), ft = (d - rf)/(double) sp;
        (ft <= dt) ? cout << (double) ft : cout << (double) dt;
    }
}
