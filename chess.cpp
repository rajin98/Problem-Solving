// URL: https://open.kattis.com/problems/chess

#include <bits/stdc++.h>
using namespace std;

char toChar(int x){
    return x + 'A' - 1;
}

int main(){
    int t; cin >> t;
    while(t--){
        int a[2], b[2], c[2]; char a1, b1;
        cin >> a1 >> a[1] >> b1 >> b[1];
        a[0] = a1 - 'A' + 1; b[0] = b1 - 'A' + 1;
        if((a[0]+a[1])%2 != (b[0]+b[1])%2) cout << "Impossible";
        else if(a[0] == b[0] && a[1] == b[1]) cout << "0 " << toChar(a[0]) << " " << a[1];
        else if(abs(a[0] - b[0]) == abs(a[1] - b[1])) cout << "1 " << toChar(a[0]) << " " << a[1] << " " << toChar(b[0]) << " " << b[1];
        else {
            int y = (a[1] - a[0] + b[0] + b[1])/2;
            int x = y - a[1] + a[0];
            if(!(x > 0 && x <= 8 && y >0 && y <= 8)) {
                y = (b[1] - b[0] + a[0] + a[1])/2;
                x = y - b[1] + b[0];
            }
            cout <<2<<" "<<toChar(a[0])<<" "<<a[1]<<" "<<toChar(x)<<" "<<y<<" "<<toChar(b[0])<<" "<<b[1];
        }
        cout << endl;
    }
}
