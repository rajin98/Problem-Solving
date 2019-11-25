// URL: https://open.kattis.com/problems/eulersnumber

#include <bits/stdc++.h>
using namespace std;

int main () {
    int n; double val = 0; double prev;
    cin >> n;
    prev = 1;
    for(int i = 1; i < n+1; i++){
        prev /= i;
        val += prev;
    }
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(15);

    cout << 1 + val;
}
