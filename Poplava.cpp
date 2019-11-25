// URL: https://open.kattis.com/problems/poplava

#include <bits/stdc++.h>

using namespace std;

int main () {
    long n, x; cin >> n >> x;
    long hp = ((n-2)*(n-1))/2;
    if(x > hp || n < 3) cout << -1;
    else{
        vector<long> a;
        long toMove = hp - x;
        cout << n << " ";
        for(long i = n-2; i > 0; i--){
            if(toMove >= i) {toMove -= i; a.push_back(i);}
            else cout << (n-1) - i << " ";
        }
        cout << n - 1 << " ";
        for(long i = a.size()-1; i >= 0; i--){
            cout << (n-1)- a[i] << " ";
        }
    }
}
