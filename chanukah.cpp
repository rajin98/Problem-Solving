// URL: https://open.kattis.com/problems/chanukah

#include <iostream>

using namespace std;

int main() {
    int p;
    cin >> p;
    while(p--){
        int k, n;
        cin >> k >> n;
        cout << k << " " << n+n*(n+1)/2 << endl;
    }
}
