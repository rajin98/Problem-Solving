// URL: https://open.kattis.com/problems/password

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n; double data[n], r = 0; string x;
    for(int i = 0; i < n; i++) cin >> x >> data[i];
    sort(data, data+n, greater<double>());
    for(int i = 0; i < n; i++) r += data[i]*(i+1);
    cout << fixed << setprecision(4) << r;
}
