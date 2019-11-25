// URL: https://open.kattis.com/problems/cetiri

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[3];
    for(int i = 0; i < 3; i++) cin >> a[i];
    sort(a, a+3);
    int d1 = a[2] - a[1], d2 = a[1] - a[0];
    if(a[2] - a[1] == a[1] - a[0]) cout << a[0] - (a[2] - a[1]);
    else (a[2] - a[1] < a[1] - a[0]) ? cout << a[1] - (a[2] - a[1]) : cout << a[1] + (a[1] - a[0]);

    return 0;
}
