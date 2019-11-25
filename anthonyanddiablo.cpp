// URL: https://open.kattis.com/problems/anthonyanddiablo

#include <bits/stdc++.h>
#define PI 3.1415926535897932384626433832795

using namespace std;

int main(){
    double a, n, r;
    cin >> a >> n;
    r = n / (2* PI);
    if(PI * r * r >= a)cout <<  "Diablo is happy!";
    else cout << "Need more materials!";
}
